#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>
#include "resolve.h"
#include "SelectStmt.h"

bool IsFromTable(Node* nd);
bool CompareIgnoreCase(const std::string& l, const std::string& r);
bool CheckCTE(Entry ety, Node* tb, std::string& ret);

int main()
{
    std::string a = "";

    a = "-- SIMPLE CTE\n"
        "WITH DirReps(ManagerID, DirectReports) AS\n"
        "(\n"
        "    SELECT ManagerID, COUNT(*)\n"
        "    FROM Employee AS e\n"
        "    WHERE ManagerID IS NOT NULL\n"
        "    GROUP BY ManagerID\n"
        ")\n"
        "SELECT ManagerID, DirectReports\n"
        "FROM DirReps\n"
        "ORDER BY ManagerID;";

    {
        ParseResult result;
        std::vector<yytokentype> tks;
        parser::parse(a, &result);
        if (result.accept)
            printf("%s\n", result.result_tree_->serialize().c_str());
        if (result.accept)
        {
            resolve::ResultPlan resultPlan([](
                    Node* node,
                    resolve::TableItem::TableType tp,
                    const std::string& table_name,
                    const std::string& alias_name,
                    uint64_t query_id
            ){
                int line = 0;
                int column = 0;
                switch (tp)
                {
                    case resolve::TableItem::BASE_TABLE:
                    {
                        assert(node->nodeType_ == E_IDENTIFIER);
                        line = node->terminalToken_.line;
                        column = node->terminalToken_.column;

                        printf("access base table: %-25s at (L%+3d:%-2d)\n", table_name.c_str(),
                                line + 1, column);
                    }
                        break;
                    case resolve::TableItem::ALIAS_TABLE:
                    {
                        assert(node->nodeType_ == E_ALIAS);
                        node = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                        assert(node->nodeType_ == E_IDENTIFIER);
                        line = node->terminalToken_.line;
                        column = node->terminalToken_.column;

                        printf("access base table: %-25s at (L%+3d:%-2d) alias: %-10s\n", table_name.c_str(),
                                line + 1, column, alias_name.c_str());
                    }
                        break;
                    default:
                        /*unreachable*/
                        break;
                }
            });

            uint64_t query_id;
            std::list<Node*> stmts;
            Node::ToList(result.result_tree_, stmts);
            for (auto stmt : stmts)
            {
                resultPlan.reset();
                printf("TABLE ANALYZE:\n");
                resolve::resolve_select_statement(&resultPlan, stmt, query_id);
                printf("\n");
            }
        }
    }

    {
        clock_t start, end;
        start = clock();
        size_t frequency = 1000;
        for (size_t i = 0; i < frequency; ++i)
        {
            ParseResult result;
            parser::parse(a, &result);
            //result.result_tree_->serialize();
            result.result_tree_->SerializeNonRecursive(result.result_tree_);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "Frequency %d,Use time is: %.8f\n", frequency, seconds);
    }



    return 0;
}

bool IsFromTable(Node* nd)
{
    if (nd->nodeType_ == E_IDENTIFIER || nd->nodeType_ == E_ALIAS)
    {
        if (nd->nodeType_ == E_ALIAS &&
                nd->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)->nodeType_ != E_IDENTIFIER)
            return false;
        if (nd->getParent()->nodeType_ == E_JOINED_TABLE ||
            nd->getParent()->nodeType_ == E_FROM_LIST ||
            nd->getParent()->nodeType_ == E_FROM_CLAUSE)
            return true;
    }
    return false;
}

bool CompareIgnoreCase(const std::string& l, const std::string& r)
{
    std::string ll = l,rr = r;
    std::transform(ll.begin(), ll.end(), ll.begin(), ::toupper);
    std::transform(rr.begin(), rr.end(), rr.begin(), ::toupper);
    return ll == rr;
}



