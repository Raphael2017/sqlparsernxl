//
// Created by qwerty on 11/21/18.
//
#include "SQLParser.h"
#include <regex>

int main()
{
    const std::string query = "SELECT CNTRYCODE, COUNT(*) AS NUMCUST, SUM(C_ACCTBAL) AS TOTACCTBAL\n"
                              "FROM (SELECT SUBSTRING(C_PHONE,1,2) AS CNTRYCODE, C_ACCTBAL\n"
                              " FROM CUSTOMER WHERE SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17') AND\n"
                              " C_ACCTBAL > (SELECT AVG(C_ACCTBAL) FROM CUSTOMER WHERE C_ACCTBAL > 0.00 AND\n"
                              "  SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17')) AND\n"
                              " NOT EXISTS ( SELECT * FROM ORDERS WHERE O_CUSTKEY = C_CUSTKEY)) AS CUSTSALE\n"
                              "GROUP BY CNTRYCODE\n"
                              "ORDER BY CNTRYCODE;";

    std::vector<int16_t> ret;
    hsql::SQLParser::tokenize("hint", &ret);

    hsql::SQLParserResult result;
    hsql::SQLParser::parse(query, &result);

    if (result.isValid() && result.size() > 0) {
        const hsql::SQLStatement* statement = result.getStatement(0);
    }

    std::string f = "{12}";
    std::string n(f.begin()+1, f.end()-1);
    int num = std::atoi(n.c_str());

    const char* a = "\"hello world\"";
    std::string tmp(a+1, a + strlen(a) - 1);


    {
        clock_t start, end;
        start = clock();
        size_t frequency = 10000;
        for (size_t i = 0; i < frequency; ++i)
        {
            hsql::SQLParserResult result;
            hsql::SQLParser::parse(query, &result);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "Frequency %d,Use time is: %.8f\n", frequency, seconds);
    }


    return 0;
}