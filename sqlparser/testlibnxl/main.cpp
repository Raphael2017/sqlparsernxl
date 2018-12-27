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
        "ORDER BY ManagerID; select 1 from umd;";

    {
        ParseResult result;
        std::vector<yytokentype> tks;
        parser::parse(a, &result);
        if (result.accept)
            printf("%s\n", result.result_tree_->serialize().c_str());
        if (result.accept)
        {
            /*
            std::set<std::string> tbs;
            Node::TreePreOrderVisit(result.result_tree_, [&tbs](Node* nd, Entry ety){
                if (!IsFromTable(nd))
                    return;
                std::string name;
                if (!CheckCTE(ety, nd, name))
                {
                    tbs.insert(name);
                }
            });
            printf("analyze table:\n");
            for (auto tb : tbs)
            {
                printf("%s\n", tb.c_str());
            }
            printf("analyze fields:\n");
            Node::TreePreOrderVisit(result.result_tree_,[](Node* nd, Entry ety){
                if (E_OP_NAME_FIELD == nd->nodeType_)
                {
                    printf("%s\n", nd->getChild(E_OP_NAME_FIELD_COLUMN_NAME)->terminalToken_.str.c_str());
                }
            });*/
            resolve::ResultPlan resultPlan([](
                Node* node,
                resolve::TableItem::TableType tp,
                const std::string& table_name,
                const std::string& alias_name,
                uint64_t query_id
            ){
                printf("base_table_name: %s\n", table_name.c_str());
                auto k = node;
            });

            uint64_t query_id;
            std::list<Node*> stmts;
            Node::ToList(result.result_tree_, stmts);
            for (auto stmt : stmts)
            {
                resultPlan.reset();
                printf("table analyze:\n");
                resolve::resolve_select_statement(&resultPlan, stmt, query_id);
            }

            return 0;
        }
    }

    {
        clock_t start, end;
        start = clock();
        size_t frequency = 10;
        for (size_t i = 0; i < frequency; ++i)
        {
            ParseResult result;
            parser::parse(a, &result);
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



