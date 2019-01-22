#include "thirdparty/microtest.h"
#include "Interface.h"
#include <time.h>
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
        "test/queries/tpc-h-28.sql",
        "test/queries/tpc-h-29.sql",
    };

    int testsFailed = 0;
    std::string concatenated = "";
    for (const std::string& file_path : files)
    {
        std::string query = readFileContents(file_path);

        INode* tree = ParseNode(query);
        if (!tree)
        {
            mt::printFailed(file_path.c_str());
            ++testsFailed;
        }
        else
        {
            mt::printOk(file_path.c_str());
            printf("%s\n", tree->Serialize().c_str());
        }
        if (tree)
        {
            concatenated += query + "\n";
        }
        DestroyNode(tree);
    }

    clock_t start, end;
    int tks_count = 0;
    INode* tree = ParseNode(concatenated);
    if (!tree)
    {
        mt::printFailed("TPCHAllConcatenated");
        ++testsFailed;
    }
    else
    {
        mt::printOk("TPCHAllConcatenated");
    }

    if (tree)
    {
        auto t = tree->GetType();
        IPlan* plan = CreatePlan([](IPlan* plan, ITableItem* tbi){
            switch (tbi->GetTableItemType())
            {
                case E_BASIC_TABLE:
                {
                    printf("access base table : %-25s at (L%+3d:%-2d)(%lld)\n", tbi->GetTableObject().c_str(), tbi->GetLine() + 1, tbi->GetColumn(), tbi->GetTableID());
                }
                    break;
                case E_BASIC_TABLE_WITH_ALIAS:
                {
                    printf("access base table : %-25s at (L%+3d:%-2d)(%lld) alias: %-10s\n", tbi->GetTableObject().c_str(), tbi->GetLine()  + 1, tbi->GetColumn(), tbi->GetTableID(), tbi->GetTableAliasName().c_str());
                }
                    break;
                default:
                    break;
            }

        },
                [](IPlan* plan, ITableColumnRefItem* cli){
                printf("access base column: %-25s at (L%+3d:%-2d) src table : %-25s at (L%+3d:%-2d)(%lld)\n",
                    cli->GetColumnObject().c_str(), cli->GetLine() + 1, cli->GetColumn() + 1,
                   cli->GetTableItem()->GetTableObject().c_str(), cli->GetTableItem()->GetLine() + 1, cli->GetTableItem()->GetColumn(), cli->GetTableItem()->GetTableID());
            },
            [](IPlan* plan){
                printf("\n");
            },nullptr, tree);
        VisitPlan(plan);
        printf("%s\n", concatenated.c_str());
        DestroyNode(tree);
        DestroyPlan(plan);
    }

    ASSERT_EQ(testsFailed, 0);
}

TEST_MAIN()
