#include "thirdparty/microtest.h"
#include "parser.h"

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
    };

    int testsFailed = 0;
    std::string concatenated = "";
    for (const std::string& file_path : files)
    {
        std::string query = readFileContents(file_path);
        concatenated += query;
        if (concatenated.back() != ';') concatenated += ";";

        ParseResult result;
        parser::parse(query, &result);
        if (!result.accept)
        {
            mt::printFailed(file_path.c_str());
            printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errDetail.c_str(), result.errFirstLine, result.errFirstColumn, mt::def());
            ++testsFailed;
        }
        else
        {
            mt::printOk(file_path.c_str());
        }
    }

    ParseResult result;
    parser::parse(concatenated, &result);
    if (!result.accept)
    {
        mt::printFailed("TPCHAllConcatenated");
        printf("%s           %s (L%d:%d)%s\n", mt::red(), result.errDetail.c_str(), result.errFirstLine, result.errFirstColumn, mt::def());
        ++testsFailed;
    }
    else
    {
        mt::printOk("TPCHAllConcatenated");
    }





    ASSERT_EQ(testsFailed, 0);
}

TEST_MAIN()
