#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>
#include "resolve.h"

bool IsFromTable(Node* nd);
bool CompareIgnoreCase(const std::string& l, const std::string& r);
bool CheckCTE(Entry ety, Node* tb, std::string& ret);

int main()
{
    std::string a = "";

    a = "-- TPC_H Query 22 - Global Sales Opportunity */\n"
        "SELECT CNTRYCODE, COUNT(*) AS NUMCUST, SUM(C_ACCTBAL) AS TOTACCTBAL\n"
        "FROM (SELECT SUBSTRING(C_PHONE,1,2) AS CNTRYCODE, C_ACCTBAL\n"
        " FROM CUSTOMER WHERE SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17') AND\n"
        " C_ACCTBAL > (SELECT AVG(C_ACCTBAL) FROM CUSTOMER WHERE C_ACCTBAL > 0.00 AND\n"
        "  SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17')) AND\n"
        " NOT EXISTS ( SELECT * FROM ORDERS WHERE O_CUSTKEY = C_CUSTKEY)) AS CUSTSALE\n"
        "GROUP BY CNTRYCODE\n"
        "ORDER BY CNTRYCODE;";

    a = "WITH cte1\n"
        "     AS (SELECT *\n"
        "         FROM   abc)\n"
        "SELECT *\n"
        "FROM   (WITH cte2\n"
        "             AS (SELECT *\n"
        "                 FROM   umd)\n"
        "        SELECT *\n"
        "         FROM   cte1) AS CMM";

    a = "SELECT cntrycode,\n"
        "       Count(qqq)       AS NUMCUST,\n"
        "       Sum(c_acctbal) AS TOTACCTBAL\n"
        "FROM   TESTA AS AT,\n"
        "        \n"
        "        (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,\n"
        "               c_acctbal\n"
        "        FROM   customer\n"
        "        WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                             '30', '18', '17' )\n"
        "               AND c_acctbal > (SELECT Avg(c_acctbal)\n"
        "                                FROM   customer\n"
        "                                WHERE  c_acctbal > 0.00\n"
        "                                       AND Substring(c_phone, 1, 2) IN (\n"
        "                                           '13', '31', '23', '29',\n"
        "                                           '30', '18', '17' ))\n"
        "               AND NOT EXISTS (SELECT eee\n"
        "                               FROM   orders\n"
        "                               WHERE  o_custkey = c_custkey)\n"
        "               AND AT.alpha > 1) AS CUSTSALE";

    a = "SELECT l_returnflag,\n"
        "       l_linestatus,\n"
        "       Sum(l_quantity)                                           AS SUM_QTY,\n"
        "       Sum(l_extendedprice)                                      AS\n"
        "       SUM_BASE_PRICE,\n"
        "       Sum(l_extendedprice * ( 1 - l_discount ))                 AS\n"
        "       SUM_DISC_PRICE,\n"
        "       Sum(l_extendedprice * ( 1 - l_discount ) * ( 1 + l_tax )) AS SUM_CHARGE,\n"
        "       Avg(l_quantity)                                           AS AVG_QTY,\n"
        "       Avg(l_extendedprice)                                      AS AVG_PRICE,\n"
        "       Avg(l_discount)                                           AS AVG_DISC,\n"
        "       Count(*)                                                  AS COUNT_ORDER\n"
        "FROM   lineitem\n"
        "WHERE  l_shipdate <= Dateadd(dd, -90, Cast('1998-12-01' AS DATETIME))";

    a = "SELECT TOP 100 s_acctbal,\n"
        "               s_name,\n"
        "               n_name,\n"
        "               p_partkey,\n"
        "               p_mfgr,\n"
        "               s_address,\n"
        "               s_phone,\n"
        "               s_comment\n"
        "FROM   part,\n"
        "       supplier,\n"
        "       partsupp,\n"
        "       nation,\n"
        "       region\n"
        "WHERE  p_partkey = ps_partkey\n"
        "       AND s_suppkey = ps_suppkey\n"
        "       AND p_size = 15\n"
        "       AND p_type LIKE '%%BRASS'\n"
        "       AND s_nationkey = n_nationkey\n"
        "       AND n_regionkey = r_regionkey\n"
        "       AND r_name = 'EUROPE'\n"
        "       AND ps_supplycost = (SELECT Min(ps_supplycost)\n"
        "                            FROM   partsupp,\n"
        "                                   supplier,\n"
        "                                   nation,\n"
        "                                   region\n"
        "                            WHERE  p_partkey = ps_partkey\n"
        "                                   AND s_suppkey = ps_suppkey\n"
        "                                   AND s_nationkey = n_nationkey\n"
        "                                   AND n_regionkey = r_regionkey\n"
        "                                   AND r_name = 'EUROPE')";

    a = "SELECT field1 FROM M";

    a = "SELECT TOP 10 l_orderkey,\n"
        "              Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,\n"
        "              o_orderdate,\n"
        "              o_shippriority\n"
        "FROM   customer,\n"
        "       orders,\n"
        "       lineitem\n"
        "WHERE  c_mktsegment = 'BUILDING'\n"
        "       AND c_custkey = o_custkey\n"
        "       AND l_orderkey = o_orderkey\n"
        "       AND o_orderdate < '1995-03-15'\n"
        "       AND l_shipdate > '1995-03-15'";

    a = "SELECT o_orderpriority,\n"
        "       Count(*) AS ORDER_COUNT\n"
        "FROM   orders\n"
        "WHERE  o_orderdate >= '1993-07-01'\n"
        "       AND o_orderdate < Dateadd(mm, 3, Cast('1993-07-01' AS DATETIME))\n"
        "       AND EXISTS (SELECT *\n"
        "                   FROM   lineitem\n"
        "                   WHERE  l_orderkey = o_orderkey\n"
        "                          AND l_commitdate < l_receiptdate) ";

    a = "SELECT n_name,\n"
        "       Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE\n"
        "FROM   customer,\n"
        "       orders,\n"
        "       lineitem,\n"
        "       supplier,\n"
        "       nation,\n"
        "       region\n"
        "WHERE  c_custkey = o_custkey\n"
        "       AND l_orderkey = o_orderkey\n"
        "       AND l_suppkey = s_suppkey\n"
        "       AND c_nationkey = s_nationkey\n"
        "       AND s_nationkey = n_nationkey\n"
        "       AND n_regionkey = r_regionkey\n"
        "       AND r_name = 'ASIA'\n"
        "       AND o_orderdate >= '1994-01-01'\n"
        "       AND o_orderdate < Dateadd(yy, 1, Cast('1994-01-01' AS DATETIME))";

    a = "-- COMMON TABLE EXPRESSION\n"
        "WITH cte1 (avg_c_acctbal)\n"
        "     AS (SELECT Avg(c_acctbal)\n"
        "         FROM   customer\n"
        "         WHERE  c_acctbal > 0.00\n"
        "                AND Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                                  '30', '18', '17' )),\n"
        "     cte2\n"
        "     AS (SELECT *\n"
        "         FROM   orders\n"
        "         WHERE  o_custkey = c_custkey),\n"
        "     cte3 (cntrycode, c_acctbal)\n"
        "     AS (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,\n"
        "                c_acctbal\n"
        "         FROM   customer\n"
        "         WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                              '30', '18', '17' )\n"
        "                AND c_acctbal > (SELECT avg_c_acctbal\n"
        "                                 FROM   cte1)\n"
        "                AND NOT EXISTS (SELECT *\n"
        "                                FROM   cte2))\n"
        "SELECT cntrycode,\n"
        "       Count(*)       AS NUMCUST,\n"
        "       Sum(c_acctbal) AS TOTACCTBAL\n"
        "FROM   cte3 AS CUSTSALE\n"
        "GROUP  BY cntrycode\n"
        "ORDER  BY cntrycode";

    a = "SELECT Sum(l_extendedprice * l_discount) AS REVENUE\n"
        "FROM   lineitem\n"
        "WHERE  l_shipdate >= '1994-01-01'\n"
        "       AND l_shipdate < Dateadd(yy, 1, Cast('1994-01-01' AS DATETIME))\n"
        "       AND l_discount BETWEEN .06 - 0.01 AND .06 + 0.01\n"
        "       AND l_quantity < 24 ";

    a = "SELECT supp_nation,\n"
        "       cust_nation,\n"
        "       l_year,\n"
        "       Sum(volume) AS REVENUE\n"
        "FROM   (SELECT N1.n_name                            AS SUPP_NATION,\n"
        "               N2.n_name                            AS CUST_NATION,\n"
        "               Datepart(yy, l_shipdate)             AS L_YEAR,\n"
        "               l_extendedprice * ( 1 - l_discount ) AS VOLUME\n"
        "        FROM   supplier,\n"
        "               lineitem,\n"
        "               orders,\n"
        "               customer,\n"
        "               nation N1,\n"
        "               nation N2\n"
        "        WHERE  s_suppkey = l_suppkey\n"
        "               AND o_orderkey = l_orderkey\n"
        "               AND c_custkey = o_custkey\n"
        "               AND s_nationkey = N1.n_nationkey\n"
        "               AND c_nationkey = N2.n_nationkey\n"
        "               AND ( ( N1.n_name = 'FRANCE'\n"
        "                       AND N2.n_name = 'GERMANY' )\n"
        "                      OR ( N1.n_name = 'GERMANY'\n"
        "                           AND N2.n_name = 'FRANCE' ) )\n"
        "               AND l_shipdate BETWEEN '1995-01-01' AND '1996-12-31') AS SHIPPING ";

    a = "SELECT o_year,\n"
        "       Sum(CASE\n"
        "             WHEN nation = 'BRAZIL' THEN volume\n"
        "             ELSE 0\n"
        "           END) / Sum(volume) AS MKT_SHARE\n"
        "FROM   (SELECT Datepart(yy, o_orderdate)            AS O_YEAR,\n"
        "               l_extendedprice * ( 1 - l_discount ) AS VOLUME,\n"
        "               N2.n_name                            AS NATION\n"
        "        FROM   \"part\",\n"
        "               supplier,\n"
        "               lineitem,\n"
        "               orders,\n"
        "               customer,\n"
        "               nation N1,\n"
        "               nation N2,\n"
        "               region\n"
        "        WHERE  p_partkey = l_partkey\n"
        "               AND s_suppkey = l_suppkey\n"
        "               AND l_orderkey = o_orderkey\n"
        "               AND o_custkey = c_custkey\n"
        "               AND c_nationkey = N1.n_nationkey\n"
        "               AND N1.n_regionkey = r_regionkey\n"
        "               AND r_name = 'AMERICA'\n"
        "               AND s_nationkey = N2.n_nationkey\n"
        "               AND o_orderdate BETWEEN '1995-01-01' AND '1996-12-31'\n"
        "               AND p_type = 'ECONOMY ANODIZED STEEL') AS ALL_NATIONS";

    a = "SELECT nation,\n"
        "       o_year,\n"
        "       Sum(amount) AS SUM_PROFIT\n"
        "FROM   (SELECT n_name\n"
        "               AS\n"
        "                      NATION,\n"
        "               Datepart(yy, o_orderdate)\n"
        "               AS\n"
        "                      O_YEAR,\n"
        "               l_extendedprice * ( 1 - l_discount ) - ps_supplycost * l_quantity\n"
        "               AS\n"
        "                      AMOUNT\n"
        "        FROM   \"part\",\n"
        "               supplier,\n"
        "               lineitem,\n"
        "               partsupp,\n"
        "               orders,\n"
        "               nation\n"
        "        WHERE  s_suppkey = l_suppkey\n"
        "               AND ps_suppkey = l_suppkey\n"
        "               AND ps_partkey = l_partkey\n"
        "               AND p_partkey = l_partkey\n"
        "               AND o_orderkey = l_orderkey\n"
        "               AND s_nationkey = n_nationkey\n"
        "               AND p_name LIKE '%%green%%') AS PROFIT";

    a = "SELECT TOP 20 c_custkey,\n"
        "              c_name,\n"
        "              Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,\n"
        "              c_acctbal,\n"
        "              n_name,\n"
        "              c_address,\n"
        "              c_phone,\n"
        "              c_comment\n"
        "FROM   customer,\n"
        "       orders,\n"
        "       lineitem,\n"
        "       nation\n"
        "WHERE  c_custkey = o_custkey\n"
        "       AND l_orderkey = o_orderkey\n"
        "       AND o_orderdate >= '1993-10-01'\n"
        "       AND o_orderdate < Dateadd(mm, 3, Cast('1993-10-01' AS DATETIME))\n"
        "       AND l_returnflag = 'R'\n"
        "       AND c_nationkey = n_nationkey ";

    a = "SELECT ps_partkey,\n"
        "       Sum(ps_supplycost * ps_availqty) AS VALUE\n"
        "FROM   partsupp,\n"
        "       supplier,\n"
        "       nation\n"
        "WHERE  ps_suppkey = s_suppkey\n"
        "       AND s_nationkey = n_nationkey\n"
        "       AND n_name = 'GERMANY'\n"
        "GROUP  BY ps_partkey\n"
        "HAVING Sum(ps_supplycost * ps_availqty) > (SELECT\n"
        "       Sum(ps_supplycost * ps_availqty) * 0.0001000000\n"
        "                                           FROM   partsupp,\n"
        "                                                  supplier,\n"
        "                                                  nation\n"
        "                                           WHERE  ps_suppkey = s_suppkey\n"
        "                                                  AND s_nationkey = n_nationkey\n"
        "                                                  AND n_name = 'GERMANY') ";

    a = "SELECT l_shipmode,\n"
        "       Sum(CASE\n"
        "             WHEN o_orderpriority = '1-URGENT'\n"
        "                   OR o_orderpriority = '2-HIGH' THEN 1\n"
        "             ELSE 0\n"
        "           END) AS HIGH_LINE_COUNT,\n"
        "       Sum(CASE\n"
        "             WHEN o_orderpriority <> '1-URGENT'\n"
        "                  AND o_orderpriority <> '2-HIGH' THEN 1\n"
        "             ELSE 0\n"
        "           END) AS LOW_LINE_COUNT\n"
        "FROM   orders,\n"
        "       lineitem\n"
        "WHERE  o_orderkey = l_orderkey\n"
        "       AND l_shipmode IN ( 'MAIL', 'SHIP' )\n"
        "       AND l_commitdate < l_receiptdate\n"
        "       AND l_shipdate < l_commitdate\n"
        "       AND l_receiptdate >= '1994-01-01'\n"
        "       AND l_receiptdate < Dateadd(mm, 1, Cast('1995-09-01' AS DATETIME)) ";

    a = "SELECT c_count,\n"
        "       Count(*) AS CUSTDIST\n"
        "FROM   (SELECT c_custkey,\n"
        "               Count(o_orderkey)\n"
        "        FROM   customer\n"
        "               LEFT OUTER JOIN orders\n"
        "                            ON c_custkey = orders.o_custkey\n"
        "                               AND o_comment NOT LIKE '%%special%%requests%%'\n"
        "        GROUP  BY c_custkey) AS C_ORDERS (c_custkey, c_count)\n"
        "GROUP  BY c_count\n"
        "ORDER  BY custdist DESC,\n"
        "          c_count DESC";

    a = "SELECT 100.00 * Sum(CASE\n"
        "                      WHEN p_type LIKE 'PROMO%%' THEN\n"
        "                      l_extendedprice * ( 1 - l_discount )\n"
        "                      ELSE 0\n"
        "                    END) / Sum(l_extendedprice * ( 1 - l_discount )) AS\n"
        "       PROMO_REVENUE\n"
        "FROM   lineitem,\n"
        "       part\n"
        "WHERE  l_partkey = p_partkey\n"
        "       AND l_shipdate >= '1995-09-01'\n"
        "       AND l_shipdate < Dateadd(mm, 1, '1995-09-01')";

    a = "SELECT p_brand,\n"
        "       p_type,\n"
        "       p_size,\n"
        "       Count(DISTINCT ps_suppkey) AS SUPPLIER_CNT\n"
        "FROM   partsupp,\n"
        "       \"part\"\n"
        "WHERE  p_partkey = ps_partkey\n"
        "       AND p_brand <> 'Brand#45'\n"
        "       AND p_type NOT LIKE 'MEDIUM POLISHED%%'\n"
        "       AND p_size IN ( 49, 14, 23, 45,\n"
        "                       19, 3, 36, 9 )\n"
        "       AND ps_suppkey NOT IN (SELECT s_suppkey\n"
        "                              FROM   supplier\n"
        "                              WHERE  s_comment LIKE '%%Customer%%Complaints%%')";

    a = "SELECT Sum(l_extendedprice) / 7.0 AS AVG_YEARLY\n"
        "FROM   lineitem,\n"
        "       \"part\"\n"
        "WHERE  p_partkey = l_partkey\n"
        "       AND p_brand = 'Brand#23'\n"
        "       AND p_container = 'MED BOX'\n"
        "       AND l_quantity < (SELECT 0.2 * Avg(l_quantity)\n"
        "                         FROM   lineitem\n"
        "                         WHERE  l_partkey = p_partkey)";

    a = "SELECT TOP 100 c_name,\n"
        "               c_custkey,\n"
        "               o_orderkey,\n"
        "               o_orderdate,\n"
        "               o_totalprice,\n"
        "               Sum(l_quantity)\n"
        "FROM   customer,\n"
        "       orders,\n"
        "       lineitem\n"
        "WHERE  o_orderkey IN (SELECT l_orderkey\n"
        "                      FROM   lineitem\n"
        "                      GROUP  BY l_orderkey\n"
        "                      HAVING Sum(l_quantity) > 300)\n"
        "       AND c_custkey = o_custkey\n"
        "       AND o_orderkey = l_orderkey ";

    a = "SELECT Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE\n"
        "FROM   lineitem,\n"
        "       \"part\"\n"
        "WHERE  ( p_partkey = l_partkey\n"
        "         AND p_brand = 'Brand#12'\n"
        "         AND p_container IN ( 'SM CASE', 'SM BOX', 'SM PACK', 'SM PKG' )\n"
        "         AND l_quantity >= 1\n"
        "         AND l_quantity <= 1 + 10\n"
        "         AND p_size BETWEEN 1 AND 5\n"
        "         AND l_shipmode IN ( 'AIR', 'AIR REG' )\n"
        "         AND l_shipinstruct = 'DELIVER IN PERSON' )\n"
        "        OR ( p_partkey = l_partkey\n"
        "             AND p_brand = 'Brand#23'\n"
        "             AND p_container IN ( 'MED BAG', 'MED BOX', 'MED PKG', 'MED PACK' )\n"
        "             AND l_quantity >= 10\n"
        "             AND l_quantity <= 10 + 10\n"
        "             AND p_size BETWEEN 1 AND 10\n"
        "             AND l_shipmode IN ( 'AIR', 'AIR REG' )\n"
        "             AND l_shipinstruct = 'DELIVER IN PERSON' )\n"
        "        OR ( p_partkey = l_partkey\n"
        "             AND p_brand = 'Brand#34'\n"
        "             AND p_container IN ( 'LG CASE', 'LG BOX', 'LG PACK', 'LG PKG' )\n"
        "             AND l_quantity >= 20\n"
        "             AND l_quantity <= 20 + 10\n"
        "             AND p_size BETWEEN 1 AND 15\n"
        "             AND l_shipmode IN ( 'AIR', 'AIR REG' )\n"
        "             AND l_shipinstruct = 'DELIVER IN PERSON' )";

    a = "SELECT s_name,\n"
        "       s_address\n"
        "FROM   supplier,\n"
        "       nation\n"
        "WHERE  s_suppkey IN (SELECT ps_suppkey\n"
        "                     FROM   partsupp\n"
        "                     WHERE  ps_partkey IN (SELECT p_partkey\n"
        "                                           FROM   \"part\"\n"
        "                                           WHERE  p_name LIKE 'forest%%')\n"
        "                            AND ps_availqty > (SELECT 0.5 * Sum(l_quantity)\n"
        "                                               FROM   lineitem\n"
        "                                               WHERE  l_partkey = ps_partkey\n"
        "                                                      AND l_suppkey = ps_suppkey\n"
        "                                                      AND l_shipdate >=\n"
        "                                                          '1994-01-01'\n"
        "                                                      AND l_shipdate < Dateadd(\n"
        "                                                          yy, 1,\n"
        "                                                          '1994-01-01'))\n"
        "                    )\n"
        "       AND s_nationkey = n_nationkey\n"
        "       AND n_name = 'CANADA'";

    a = "SELECT TOP 100 s_name,\n"
        "               Count(*) AS NUMWAIT\n"
        "FROM   supplier,\n"
        "       lineitem L1,\n"
        "       orders,\n"
        "       nation\n"
        "WHERE  s_suppkey = L1.l_suppkey\n"
        "       AND o_orderkey = L1.l_orderkey\n"
        "       AND o_orderstatus = 'F'\n"
        "       AND L1.l_receiptdate > L1.l_commitdate\n"
        "       AND EXISTS (SELECT *\n"
        "                   FROM   lineitem L2\n"
        "                   WHERE  L2.l_orderkey = L1.l_orderkey\n"
        "                          AND L2.l_suppkey <> L1.l_suppkey)\n"
        "       AND NOT EXISTS (SELECT *\n"
        "                       FROM   lineitem L3\n"
        "                       WHERE  L3.l_orderkey = L1.l_orderkey\n"
        "                              AND L3.l_suppkey <> L1.l_suppkey\n"
        "                              AND L3.l_receiptdate > L3.l_commitdate)\n"
        "       AND s_nationkey = n_nationkey\n"
        "       AND n_name = 'SAUDI ARABIA'";

    a = "SELECT cntrycode,\n"
        "       Count(*)       AS NUMCUST,\n"
        "       Sum(c_acctbal) AS TOTACCTBAL\n"
        "FROM   (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,\n"
        "               c_acctbal\n"
        "        FROM   customer\n"
        "        WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                             '30', '18', '17' )\n"
        "               AND c_acctbal > (SELECT Avg(c_acctbal)\n"
        "                                FROM   customer\n"
        "                                WHERE  c_acctbal > 0.00\n"
        "                                       AND Substring(c_phone, 1, 2) IN (\n"
        "                                           '13', '31', '23', '29',\n"
        "                                           '30', '18', '17' ))\n"
        "               AND NOT EXISTS (SELECT *\n"
        "                               FROM   orders\n"
        "                               WHERE  o_custkey = c_custkey)) AS CUSTSALE";

    a = "WITH cte1 (avg_c_acctbal)\n"
        "     AS (SELECT Avg(c_acctbal)\n"
        "         FROM   customer\n"
        "         WHERE  c_acctbal > 0.00\n"
        "                AND Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                                  '30', '18', '17' )),\n"
        "     cte2\n"
        "     AS (SELECT *\n"
        "         FROM   orders\n"
        "         WHERE  o_custkey = c_custkey),\n"
        "     cte3 (cntrycode, c_acctbal)\n"
        "     AS (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,\n"
        "                c_acctbal\n"
        "         FROM   customer\n"
        "         WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',\n"
        "                                              '30', '18', '17' )\n"
        "                AND c_acctbal > (SELECT avg_c_acctbal\n"
        "                                 FROM   cte1)\n"
        "                AND NOT EXISTS (SELECT *\n"
        "                                FROM   cte2))\n"
        "SELECT cntrycode,\n"
        "       Count(*)       AS NUMCUST,\n"
        "       Sum(c_acctbal) AS TOTACCTBAL\n"
        "FROM   cte3 AS CUSTSALE";

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
            resolve::ResultPlan resultPlan;
            resultPlan.logicPlan_ = new resolve::LogicPlan;
            uint64_t query_id;
            resolve::resolve_select_statement(&resultPlan, result.result_tree_, query_id, nullptr);
            resolve::LocalTableMgr::Ins()->report();
            auto ins = resolve::LocalTableMgr::Ins();
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

/*
 * check environment list to find cte reference
 * */
bool CheckCTE(Entry ety, Node* tb, std::string& ret)
{
    assert( tb->nodeType_ == E_IDENTIFIER || tb->nodeType_ == E_ALIAS);
    std::string name = "";
    if (tb->nodeType_ == E_IDENTIFIER)
        name = tb->terminalToken_.str;
    else if (tb->nodeType_ == E_ALIAS)
    {
        name = tb->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS)->terminalToken_.str;
    }
    assert(name.length() > 0);
    ret = name;
    Entry e = ety;
    while (e)
    {
        assert(e->self->nodeType_ == E_SELECT);
        Node* optctes = e->self->getChild(E_SELECT_OPT_WITH);
        if (optctes)
        {
            Node* ctes = optctes->getChild(E_OPT_WITH_CLAUSE_CTE_LIST);
            std::list<Node*> lsCtes;
            Node::ToList(ctes, lsCtes);
            auto find = std::find_if(lsCtes.begin(), lsCtes.end(), [name](Node* itcte){
                std::string rr = itcte->getChild(E_COMMON_TABLE_EXPR_TABLE)->terminalToken_.str;
                if (CompareIgnoreCase(name, rr))
                    return true;
            });
            if (find != lsCtes.end())
                return true;
        }
        e = e->parent;
    }
    return false;
}


