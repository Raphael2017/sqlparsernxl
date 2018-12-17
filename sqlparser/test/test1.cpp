//
// Created by qwerty on 11/21/18.
//
#include "SQLParser.h"
#include <regex>
#include <iostream>

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

    {
        std::string text = "{0}";
        std::regex express("\\{[0-9]+\\}");
        std::match_results<std::string::iterator> results1;
        if(std::regex_search(text.begin(), text.end(), results1, express))
        {
            std::match_results<std::string::iterator>::const_iterator iter;
            for (iter = results1.begin(); iter != results1.end(); iter++)
            {
                std::cout << iter->length() << ": " << iter->str() << std::endl;
            }
            for (size_t i = 0; i < results1.size(); ++i)
            {
                std::cout << "match " << i << " (" << results1[i] << ") ";
                std::cout << "at position " << results1.position(i) << std::endl;
            }
        }
    }



    {
        std::string a = "SELECT last_name, \n"
            "       job_id, \n"
            "       salary \n"
            "FROM   employees, bosses\n"
            "WHERE  job_id = (SELECT job_id \n"
            "                 FROM   employees as employees_new \n"
            "                 WHERE  employees_new.employee_id = 141) \n"
            "       AND salary > (SELECT salary \n"
            "                     FROM   employees \n"
            "                     WHERE  employee_id = 141);\n"
                ;
        a = "SELECT CNTRYCODE, COUNT(*) AS NUMCUST, SUM(C_ACCTBAL) AS TOTACCTBAL\n"
            "FROM (SELECT SUBSTRING(C_PHONE,1,2) AS CNTRYCODE, C_ACCTBAL\n"
            " FROM CUSTOMER WHERE SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17') AND\n"
            " C_ACCTBAL > (SELECT AVG(C_ACCTBAL) FROM CUSTOMER WHERE C_ACCTBAL > 0.00 AND\n"
            "  SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17')) AND\n"
            " NOT EXISTS ( SELECT * FROM ORDERS WHERE O_CUSTKEY = C_CUSTKEY)) AS CUSTSALE\n"
            "GROUP BY CNTRYCODE\n"
            "ORDER BY CNTRYCODE;";
        clock_t start, end;
        start = clock();
        size_t frequency = 10000;
        for (size_t i = 0; i < frequency; ++i)
        {
            hsql::SQLParserResult result;
            hsql::SQLParser::parse(a, &result);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "Frequency %d,Use time is: %.8f\n", frequency, seconds);
    }


    return 0;
}