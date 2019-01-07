#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>
#include "resolve.h"
#include "SelectStmt.h"


int main()
{
    std::string a = "";

    a = "select db1..account.salary from db1..account";
    a = "select ID,Title from Article_Detail order by id OFFSET (15 * (50-1)) ROW FETCH NEXT 15 rows only";
    a = "select column_alias=sum(field1) alpha from account";
    a = "select * from acc for browse";
    a = "select * from acc as tbdelta with(index(1,3,5) NOLOCK,ROWLOCK )";

    {
        ParseResult result;
        std::vector<yytokentype> tks;
        parser::parse(a, &result);
        if (result.accept)
        {
            printf("%s\n", result.result_tree_->serialize().c_str());
            printf("%s\n", result.result_tree_->SerializeNonRecursive(result.result_tree_).c_str());
            Node::print(result.result_tree_);
        }

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
                        if (node->nodeType_ == E_TABLE_IDENT)
                        {
                            node = node->getChild(0);
                        }
                        line = node->terminalToken_.line;
                        column = node->terminalToken_.column;

                        printf("access base table: %-25s at (L%3d:%-2d)\n", table_name.c_str(),
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

                        printf("access base table: %-25s at (L%3d:%-2d) alias: %-10s\n", table_name.c_str(),
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

        int tks_count = 0;
        std::vector<yytokentype> tks;
        parser::tokenize(a, &tks);
        tks_count = tks.size();

        for (size_t i = 0; i < frequency; ++i)
        {
            ParseResult result;
            parser::parse(a, &result);
            result.result_tree_->serialize();
            //result.result_tree_->SerializeNonRecursive(result.result_tree_);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "Frequency %d,Use time is: %.8f\n", frequency, seconds);

        seconds = seconds / (tks_count * frequency / 1000);
        fprintf(stdout, "per 1000 tokens,Use time is: %.8f\n", seconds);
    }



    return 0;
}





