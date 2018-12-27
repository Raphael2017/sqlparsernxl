#include "thirdparty/microtest.h"
#include "parser.h"
#include "resolve.h"
#include "SelectStmt.h"

#include <fstream>
#include <iostream>

std::string readFileContents(const std::string& file_path)
{
    std::ifstream t(file_path);
    std::string text((std::istreambuf_iterator<char>(t)),
        std::istreambuf_iterator<char>());
    return text;
}

TEST(TPCHQueryGrammarTests)
{
    std::vector<std::string> files = {
        "test/queries/tpc-h-01.sql",
        "test/queries/tpc-h-02.sql",
        "test/queries/tpc-h-03.sql",
        "test/queries/tpc-h-04.sql",
        "test/queries/tpc-h-05.sql",
        "test/queries/tpc-h-06.sql",
        "test/queries/tpc-h-07.sql",
        "test/queries/tpc-h-08.sql",
        "test/queries/tpc-h-09.sql",
        "test/queries/tpc-h-10.sql",
        "test/queries/tpc-h-11.sql",
        "test/queries/tpc-h-12.sql",
        "test/queries/tpc-h-13.sql",
        "test/queries/tpc-h-14.sql",
        "test/queries/tpc-h-15.sql",
        "test/queries/tpc-h-16.sql",
        "test/queries/tpc-h-17.sql",
        "test/queries/tpc-h-18.sql",
        "test/queries/tpc-h-19.sql",
        "test/queries/tpc-h-20.sql",
        "test/queries/tpc-h-21.sql",
        "test/queries/tpc-h-22.sql",
        "test/queries/tpc-h-23.sql",
        "test/queries/tpc-h-24.sql",
        "test/queries/tpc-h-25.sql",
        "test/queries/tpc-h-26.sql",
        "test/queries/tpc-h-27.sql",
    };

    int testsFailed = 0;
    std::string concatenated = "";
    for (const std::string& file_path : files)
    {
        std::string query = readFileContents(file_path);


        ParseResult result;
        parser::parse(query, &result);
        if (!result.accept)
        {
            mt::printFailed(file_path.c_str());
            printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errDetail.c_str(), result.errFirstLine + 1, result.errFirstColumn, mt::def());
            ++testsFailed;
        }
        else
        {
            mt::printOk(file_path.c_str());
        }
        if (result.accept)
        {
            concatenated += query;
            if (concatenated.back() != ';')
                concatenated += ";\n";
            else
                concatenated += "\n";
        }
    }

    ParseResult result;
    parser::parse(concatenated, &result);
    if (!result.accept)
    {
        mt::printFailed("TPCHAllConcatenated");
        printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errDetail.c_str(), result.errFirstLine + 1, result.errFirstColumn, mt::def());
        ++testsFailed;
    }
    else
    {
        mt::printOk("TPCHAllConcatenated");
    }

    if (result.accept)
    {
        printf("%s\n", concatenated.c_str());
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
                }
                    break;
                case resolve::TableItem::ALIAS_TABLE:
                {
                    assert(node->nodeType_ == E_ALIAS);
                    node = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                    assert(node->nodeType_ == E_IDENTIFIER);
                    line = node->terminalToken_.line;
                    column = node->terminalToken_.column;
                }
                    break;
                default:
                    /*unreachable*/
                    break;
            }

            printf("access base table: %-30s at (L%d:%d)\n", table_name.c_str(), line + 1, column);
        });

        uint64_t query_id;
        std::list<Node*> stmts;
        Node::ToList(result.result_tree_, stmts);
        for (auto stmt : stmts)
        {
            resultPlan.reset();
            printf("SQL:\n");
            printf("%s\n", stmt->serialize().c_str());
            printf("TABLE ANALYZE:\n");
            resolve::resolve_select_statement(&resultPlan, stmt, query_id);
            printf("\n");
        }
        mt::printOk("TPCHAllConcatenated Semantics Detail");
    }

    ASSERT_EQ(testsFailed, 0);
}

TEST_MAIN()
