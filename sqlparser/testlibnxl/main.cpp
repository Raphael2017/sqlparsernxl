#include "parser.h"
#include <algorithm>

Node* protect_exp(const std::string& tableName, bool isWithParens)
{
    /* SUPPLIER.NXLFIELD1 >= 10 AND SUPPLIER.NXLFIELD2 <> 5 */
    Node* f1 = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2,
            Node::makeTerminalNode(E_IDENTIFIER, tableName.c_str()),
            Node::makeTerminalNode(E_IDENTIFIER, "NXLFIELD1"));
    f1->serialize_format = {"{0}", ".", "{1}"};
    Node* f2 = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2,
             Node::makeTerminalNode(E_IDENTIFIER, tableName.c_str()),
             Node::makeTerminalNode(E_IDENTIFIER, "NXLFIELD2"));
    f2->serialize_format = {"{0}", ".", "{1}"};

    Node* c1 = Node::makeNonTerminalNode(E_OP_GE, 2,
            f1,
            Node::makeTerminalNode(E_INT, "10"));
    c1->serialize_format = {"{0}", " >= ", "{1}"};

    Node* c2 = Node::makeNonTerminalNode(E_OP_NE, 2,
            f2,
            Node::makeTerminalNode(E_INT, "5"));
    c2->serialize_format = {"{0}", " <> ", "{1}"};


    Node* exp = Node::makeNonTerminalNode(E_OP_AND, 2, c1, c2);
    exp->serialize_format = {"{0}", " AND ", "{1}"};

    if (!isWithParens)
    {
        return exp;
    }

    Node* ret = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, exp);
    ret->serialize_format = {"(", "{0}", ")"};


    return ret;
}

Node* protect_sel(const std::string& tableName_, const std::string& aliasName, Node*& node)
{
    std::string tableName = tableName_;
    std::transform(tableName_.begin(), tableName_.end(), tableName.begin(), ::toupper);
    if (tableName == "EMPLOYEES")
    {
        // SELECT * from tableName where tableName.NXLFIELD1 >= 10 AND tableName.NXLFIELD2 <> 5
        std::string sql = "(SELECT * FROM " + tableName + " WHERE " + tableName + ".NXLFIELD1 >= 10 AND " + tableName + ".NXLFIELD2 <> 5)";
        ParseResult ret;
        parser::parse(sql, &ret);
        Node* nm = Node::makeTerminalNode(E_IDENTIFIER, aliasName.c_str());
        Node* result = Node::makeNonTerminalNode(E_ALIAS, 2, ret.result_tree_, nm);
        result->serialize_format = {"{0}", " AS ", "{1}"};
        Node* ori = node;
        node = result;
        return ori;
    }
    else if (tableName == "BOSSES")
    {
        // SELECT * from tableName where tableName.NXLFIELD3 < 3 AND tableName.NXLFIELD4 > 4
        std::string sql = "(SELECT * FROM " + tableName + " WHERE " + tableName + ".NXLFIELD3 >= 10 AND " + tableName + ".NXLFIELD4 <> 5)";
        ParseResult ret;
        parser::parse(sql, &ret);
        Node* nm = Node::makeTerminalNode(E_IDENTIFIER, aliasName.c_str());
        Node* result = Node::makeNonTerminalNode(E_ALIAS, 2, ret.result_tree_, nm);
        result->serialize_format = {"{0}", " AS ", "{1}"};
        Node* ori = node;
        node = result;
        return ori;
    }
    else
    {
        return nullptr;
    }
}

void protect(Node* root);

void ffd_(Node* root, NodeType target, std::list<Node*>& ret);

int main()
{
    std::string a = "";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT O_ORDERPRIORITY, COUNT(*) AS ORDER_COUNT FROM ORDERS\n"
        "WHERE O_ORDERDATE >= '1993-07-01' AND O_ORDERDATE < dateadd(mm,3, cast('1993-07-01' as TINYINT))\n"
        "AND EXISTS (SELECT * FROM LINEITEM WHERE L_ORDERKEY = O_ORDERKEY AND L_COMMITDATE < L_RECEIPTDATE)\n"
        "GROUP BY O_ORDERPRIORITY\n"
        "ORDER BY O_ORDERPRIORITY";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT N_NAME, SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)) AS REVENUE\n"
        "FROM CUSTOMER, ORDERS, LINEITEM, SUPPLIER, NATION, REGION\n"
        "WHERE C_CUSTKEY = O_CUSTKEY AND L_ORDERKEY = O_ORDERKEY AND L_SUPPKEY = S_SUPPKEY\n"
        "AND C_NATIONKEY = S_NATIONKEY AND S_NATIONKEY = N_NATIONKEY AND N_REGIONKEY = R_REGIONKEY\n"
        "AND R_NAME = 'ASIA' AND O_ORDERDATE >= '1994-01-01'\n"
        "AND O_ORDERDATE < DATEADD(YY, 1, cast('1994-01-01' as TINYINT))\n"
        "GROUP BY N_NAME\n"
        "ORDER BY REVENUE DESC";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT SUM(L_EXTENDEDPRICE*L_DISCOUNT) AS REVENUE\n"
        "FROM LINEITEM\n"
        "WHERE L_SHIPDATE >= '1994-01-01' AND L_SHIPDATE < dateadd(yy, 1, cast('1994-01-01' as TINYINT))\n"
        "AND L_DISCOUNT BETWEEN .06 - 0.01 AND .06 + 0.01 AND L_QUANTITY < 24";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT SUPP_NATION, CUST_NATION, L_YEAR, SUM(VOLUME) AS REVENUE\n"
        "FROM ( SELECT N1.N_NAME AS SUPP_NATION, N2.N_NAME AS CUST_NATION, datepart(yy, L_SHIPDATE) AS L_YEAR,\n"
        " L_EXTENDEDPRICE*(1-L_DISCOUNT) AS VOLUME\n"
        " FROM SUPPLIER, LINEITEM, ORDERS, CUSTOMER, NATION N1, NATION N2\n"
        " WHERE S_SUPPKEY = L_SUPPKEY AND O_ORDERKEY = L_ORDERKEY AND C_CUSTKEY = O_CUSTKEY\n"
        " AND S_NATIONKEY = N1.N_NATIONKEY AND C_NATIONKEY = N2.N_NATIONKEY AND  ((N1.N_NAME = 'FRANCE' AND N2.N_NAME = 'GERMANY') OR\n"
        " (N1.N_NAME = 'GERMANY' AND N2.N_NAME = 'FRANCE')) AND\n"
        " L_SHIPDATE BETWEEN '1995-01-01' AND '1996-12-31' ) AS SHIPPING\n"
        "GROUP BY SUPP_NATION, CUST_NATION, L_YEAR\n"
        "ORDER BY SUPP_NATION, CUST_NATION, L_YEAR";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT O_YEAR, SUM(CASE WHEN NATION = 'BRAZIL' THEN VOLUME ELSE 0 END)/SUM(VOLUME) AS MKT_SHARE\n"
        "FROM (SELECT datepart(yy,O_ORDERDATE) AS O_YEAR, L_EXTENDEDPRICE*(1-L_DISCOUNT) AS VOLUME, N2.N_NAME AS NATION\n"
        " FROM \"PART\", SUPPLIER, LINEITEM, ORDERS, CUSTOMER, NATION N1, NATION N2, REGION\n"
        " WHERE P_PARTKEY = L_PARTKEY AND S_SUPPKEY = L_SUPPKEY AND L_ORDERKEY = O_ORDERKEY\n"
        " AND O_CUSTKEY = C_CUSTKEY AND C_NATIONKEY = N1.N_NATIONKEY AND\n"
        " N1.N_REGIONKEY = R_REGIONKEY AND R_NAME = 'AMERICA' AND S_NATIONKEY = N2.N_NATIONKEY\n"
        " AND O_ORDERDATE BETWEEN '1995-01-01' AND '1996-12-31' AND P_TYPE= 'ECONOMY ANODIZED STEEL') AS ALL_NATIONS\n"
        "GROUP BY O_YEAR\n"
        "ORDER BY O_YEAR";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT NATION, O_YEAR, SUM(AMOUNT) AS SUM_PROFIT\n"
        "FROM (SELECT N_NAME AS NATION, datepart(yy, O_ORDERDATE) AS O_YEAR,\n"
        " L_EXTENDEDPRICE*(1-L_DISCOUNT)-PS_SUPPLYCOST*L_QUANTITY AS AMOUNT\n"
        " FROM \"PART\", SUPPLIER, LINEITEM, PARTSUPP, ORDERS, NATION\n"
        " WHERE S_SUPPKEY = L_SUPPKEY AND PS_SUPPKEY= L_SUPPKEY AND PS_PARTKEY = L_PARTKEY AND\n"
        " P_PARTKEY= L_PARTKEY AND O_ORDERKEY = L_ORDERKEY AND S_NATIONKEY = N_NATIONKEY AND\n"
        " P_NAME LIKE '%%green%%') AS PROFIT\n"
        "GROUP BY NATION, O_YEAR\n"
        "ORDER BY NATION, O_YEAR DESC";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "-- TPC_H Query 11 - Important Stock Identification\n"
        "SELECT PS_PARTKEY, SUM(PS_SUPPLYCOST*PS_AVAILQTY) AS VALUE\n"
        "FROM PARTSUPP, SUPPLIER, NATION\n"
        "WHERE PS_SUPPKEY = S_SUPPKEY AND S_NATIONKEY = N_NATIONKEY AND N_NAME = 'GERMANY'\n"
        "GROUP BY PS_PARTKEY\n"
        "HAVING SUM(PS_SUPPLYCOST*PS_AVAILQTY) > (SELECT SUM(PS_SUPPLYCOST*PS_AVAILQTY) * 0.0001000000\n"
        " FROM PARTSUPP, SUPPLIER, NATION\n"
        " WHERE PS_SUPPKEY = S_SUPPKEY AND S_NATIONKEY = N_NATIONKEY AND N_NAME = 'GERMANY')\n"
        "ORDER BY VALUE DESC;";

    a = "-- TPC_H Query 12 - Shipping Modes and Order Priority\n"
        "SELECT L_SHIPMODE,\n"
        "SUM(CASE WHEN O_ORDERPRIORITY = '1-URGENT' OR O_ORDERPRIORITY = '2-HIGH' THEN 1 ELSE 0 END) AS HIGH_LINE_COUNT,\n"
        "SUM(CASE WHEN O_ORDERPRIORITY <> '1-URGENT' AND O_ORDERPRIORITY <> '2-HIGH' THEN 1 ELSE 0 END ) AS LOW_LINE_COUNT\n"
        "FROM ORDERS, LINEITEM\n"
        "WHERE O_ORDERKEY = L_ORDERKEY AND L_SHIPMODE IN ('MAIL','SHIP')\n"
        "AND L_COMMITDATE < L_RECEIPTDATE AND L_SHIPDATE < L_COMMITDATE AND L_RECEIPTDATE >= '1994-01-01'\n"
        "AND L_RECEIPTDATE < dateadd(mm, 1, cast('1995-09-01' as TINYINT))\n"
        "GROUP BY L_SHIPMODE\n"
        "ORDER BY L_SHIPMODE;";

    a = "-- TPC_H Query 13 - Customer Distribution\n"
        "SELECT C_COUNT, COUNT(*) AS CUSTDIST\n"
        "FROM (SELECT C_CUSTKEY, COUNT(O_ORDERKEY)\n"
        " FROM CUSTOMER left outer join ORDERS on C_CUSTKEY = O_CUSTKEY\n"
        " AND O_COMMENT not like '%%special%%requests%%'\n"
        " GROUP BY C_CUSTKEY) AS C_ORDERS\n"
        "GROUP BY C_COUNT\n"
        "ORDER BY CUSTDIST DESC, C_COUNT DESC;";

    a = "-- TPC_H Query 14 - Promotion Effect\n"
        "SELECT 100.00* SUM(CASE WHEN P_TYPE LIKE 'PROMO%%' THEN L_EXTENDEDPRICE*(1-L_DISCOUNT)\n"
        "ELSE 0 END) / SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)) AS PROMO_REVENUE\n"
        "FROM LINEITEM, PART\n"
        "WHERE L_PARTKEY = P_PARTKEY AND L_SHIPDATE >= '1995-09-01' AND L_SHIPDATE < dateadd(mm, 1, '1995-09-01');";

    a = "SELECT S_SUPPKEY, S_NAME, S_ADDRESS, S_PHONE, TOTAL_REVENUE\n"
        "FROM SUPPLIER, REVENUE0\n"
        "WHERE S_SUPPKEY = SUPPLIER_NO AND TOTAL_REVENUE = (SELECT MAX(TOTAL_REVENUE) FROM REVENUE0)\n"
        "ORDER BY S_SUPPKEY;";

    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "-- TPC_H Query 16 - Parts/Supplier Relationship\n"
        "SELECT P_BRAND, P_TYPE, P_SIZE, COUNT(DISTINCT PS_SUPPKEY) AS SUPPLIER_CNT\n"
        "FROM PARTSUPP, \"PART\"\n"
        "WHERE P_PARTKEY = PS_PARTKEY AND P_BRAND <> 'Brand#45' AND P_TYPE NOT LIKE 'MEDIUM POLISHED%%'\n"
        "AND P_SIZE IN (49, 14, 23, 45, 19, 3, 36, 9) AND PS_SUPPKEY NOT IN (SELECT S_SUPPKEY FROM SUPPLIER\n"
        " WHERE S_COMMENT LIKE '%%Customer%%Complaints%%')\n"
        "GROUP BY P_BRAND, P_TYPE, P_SIZE\n"
        "ORDER BY SUPPLIER_CNT DESC, P_BRAND, P_TYPE, P_SIZE;";

    a = "-- TPC_H Query 17 - Small-Quantity-Order Revenue\n"
        "SELECT SUM(L_EXTENDEDPRICE)/7.0 AS AVG_YEARLY FROM LINEITEM, \"PART\"\n"
        "WHERE P_PARTKEY = L_PARTKEY AND P_BRAND = 'Brand#23' AND P_CONTAINER = 'MED BOX'\n"
        "AND L_QUANTITY < (SELECT 0.2*AVG(L_QUANTITY) FROM LINEITEM WHERE L_PARTKEY = P_PARTKEY);";

    a = "-- TPC_H Query 18 - Large Volume Customer\n"
        "SELECT TOP 100 C_NAME, C_CUSTKEY, O_ORDERKEY, O_ORDERDATE, O_TOTALPRICE, SUM(L_QUANTITY)\n"
        "FROM CUSTOMER, ORDERS, LINEITEM\n"
        "WHERE O_ORDERKEY IN (SELECT L_ORDERKEY FROM LINEITEM GROUP BY L_ORDERKEY HAVING\n"
        " SUM(L_QUANTITY) > 300) AND C_CUSTKEY = O_CUSTKEY AND O_ORDERKEY = L_ORDERKEY\n"
        "GROUP BY C_NAME, C_CUSTKEY, O_ORDERKEY, O_ORDERDATE, O_TOTALPRICE\n"
        "ORDER BY O_TOTALPRICE DESC, O_ORDERDATE;";

    a = "-- TPC_H Query 19 - Discounted Revenue\n"
        "SELECT SUM(L_EXTENDEDPRICE* (1 - L_DISCOUNT)) AS REVENUE\n"
        "FROM LINEITEM, \"PART\"\n"
        "WHERE (P_PARTKEY = L_PARTKEY AND P_BRAND = 'Brand#12' AND P_CONTAINER IN ('SM CASE', 'SM BOX', 'SM PACK', 'SM PKG') AND L_QUANTITY >= 1 AND L_QUANTITY <= 1 + 10 AND P_SIZE BETWEEN 1 AND 5\n"
        "AND L_SHIPMODE IN ('AIR', 'AIR REG') AND L_SHIPINSTRUCT = 'DELIVER IN PERSON')\n"
        "OR (P_PARTKEY = L_PARTKEY AND P_BRAND ='Brand#23' AND P_CONTAINER IN ('MED BAG', 'MED BOX', 'MED PKG', 'MED PACK') AND L_QUANTITY >=10 AND L_QUANTITY <=10 + 10 AND P_SIZE BETWEEN 1 AND 10\n"
        "AND L_SHIPMODE IN ('AIR', 'AIR REG') AND L_SHIPINSTRUCT = 'DELIVER IN PERSON')\n"
        "OR (P_PARTKEY = L_PARTKEY AND P_BRAND = 'Brand#34' AND P_CONTAINER IN ( 'LG CASE', 'LG BOX', 'LG PACK', 'LG PKG') AND L_QUANTITY >=20 AND L_QUANTITY <= 20 + 10 AND P_SIZE BETWEEN 1 AND 15\n"
        "AND L_SHIPMODE IN ('AIR', 'AIR REG') AND L_SHIPINSTRUCT = 'DELIVER IN PERSON');";

    a = "-- TPC_H Query 20 - Potential Part Promotion\n"
        "SELECT S_NAME, S_ADDRESS FROM SUPPLIER, NATION\n"
        "WHERE S_SUPPKEY IN (SELECT PS_SUPPKEY FROM PARTSUPP\n"
        " WHERE PS_PARTKEY in (SELECT P_PARTKEY FROM \"PART\" WHERE P_NAME like 'forest%%') AND\n"
        " PS_AVAILQTY > (SELECT 0.5*sum(L_QUANTITY) FROM LINEITEM WHERE L_PARTKEY = PS_PARTKEY AND\n"
        "  L_SUPPKEY = PS_SUPPKEY AND L_SHIPDATE >= '1994-01-01' AND\n"
        "  L_SHIPDATE < dateadd(yy,1,'1994-01-01'))) AND S_NATIONKEY = N_NATIONKEY AND N_NAME = 'CANADA'\n"
        "ORDER BY S_NAME;";

    a = "-- TPC_H Query 21 - Suppliers Who Kept Orders Waiting\n"
        "SELECT TOP 100 S_NAME, COUNT(*) AS NUMWAIT\n"
        "FROM SUPPLIER, LINEITEM L1, ORDERS, NATION WHERE S_SUPPKEY = L1.L_SUPPKEY AND\n"
        "O_ORDERKEY = L1.L_ORDERKEY AND O_ORDERSTATUS = 'F' AND L1.L_RECEIPTDATE> L1.L_COMMITDATE\n"
        "AND EXISTS (SELECT * FROM LINEITEM L2 WHERE L2.L_ORDERKEY = L1.L_ORDERKEY\n"
        " AND L2.L_SUPPKEY <> L1.L_SUPPKEY) AND\n"
        "NOT EXISTS (SELECT * FROM LINEITEM L3 WHERE L3.L_ORDERKEY = L1.L_ORDERKEY AND\n"
        " L3.L_SUPPKEY <> L1.L_SUPPKEY AND L3.L_RECEIPTDATE > L3.L_COMMITDATE) AND\n"
        "S_NATIONKEY = N_NATIONKEY AND N_NAME = 'SAUDI ARABIA'\n"
        "GROUP BY S_NAME\n"
        "ORDER BY NUMWAIT DESC, S_NAME;";

    a = "-- TPC_H Query 22 - Global Sales Opportunity */\n"
        "SELECT CNTRYCODE, COUNT(*) AS NUMCUST, SUM(C_ACCTBAL) AS TOTACCTBAL\n"
        "FROM (SELECT SUBSTRING(C_PHONE,1,2) AS CNTRYCODE, C_ACCTBAL\n"
        " FROM CUSTOMER WHERE SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17') AND\n"
        " C_ACCTBAL > (SELECT AVG(C_ACCTBAL) FROM CUSTOMER WHERE C_ACCTBAL > 0.00 AND\n"
        "  SUBSTRING(C_PHONE,1,2) IN ('13', '31', '23', '29', '30', '18', '17')) AND\n"
        " NOT EXISTS ( SELECT * FROM ORDERS WHERE O_CUSTKEY = C_CUSTKEY)) AS CUSTSALE\n"
        "GROUP BY CNTRYCODE\n"
        "ORDER BY CNTRYCODE;";

    a = "SELECT L_RETURNFLAG, L_LINESTATUS, SUM(L_QUANTITY) AS SUM_QTY,\n"
        " SUM(L_EXTENDEDPRICE) AS SUM_BASE_PRICE, SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)) AS SUM_DISC_PRICE,\n"
        " SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)*(1+L_TAX)) AS SUM_CHARGE, AVG(L_QUANTITY) AS AVG_QTY,\n"
        " AVG(L_EXTENDEDPRICE) AS AVG_PRICE, AVG(L_DISCOUNT) AS AVG_DISC, COUNT(*) AS COUNT_ORDER\n"
        "FROM LINEITEM AS TESTLINEITEM\n"
        "WHERE L_SHIPDATE <= dateadd(dd, -90, cast('1998-12-01' as TINYINT))\n"
        "GROUP BY L_RETURNFLAG, L_LINESTATUS\n"
        "ORDER BY L_RETURNFLAG,L_LINESTATUS;";

    a = "SELECT TOP 100 S_ACCTBAL, S_NAME, N_NAME, P_PARTKEY, P_MFGR, S_ADDRESS, S_PHONE, S_COMMENT\n"
        "FROM PART, SUPPLIER, PARTSUPP, NATION, REGION\n"
        "WHERE P_PARTKEY = PS_PARTKEY AND S_SUPPKEY = PS_SUPPKEY AND P_SIZE = 15 AND\n"
        "P_TYPE LIKE '%%BRASS' AND S_NATIONKEY = N_NATIONKEY AND N_REGIONKEY = R_REGIONKEY AND\n"
        "R_NAME = 'EUROPE' AND\n"
        "PS_SUPPLYCOST = (SELECT MIN(PS_SUPPLYCOST) FROM PARTSUPP, SUPPLIER, NATION, REGION\n"
        " WHERE P_PARTKEY = PS_PARTKEY AND S_SUPPKEY = PS_SUPPKEY\n"
        " AND S_NATIONKEY = N_NATIONKEY AND N_REGIONKEY = R_REGIONKEY AND R_NAME = 'EUROPE')\n"
        "ORDER BY S_ACCTBAL DESC, N_NAME, S_NAME, P_PARTKEY";


    a = "-- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html\n"
        "SELECT TOP 10 L_ORDERKEY, SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)) AS REVENUE, O_ORDERDATE, O_SHIPPRIORITY\n"
        "FROM CUSTOMER, ORDERS, LINEITEM\n"
        "WHERE C_MKTSEGMENT = 'BUILDING' AND C_CUSTKEY = O_CUSTKEY AND L_ORDERKEY = O_ORDERKEY AND\n"
        "O_ORDERDATE < '1995-03-15' AND L_SHIPDATE > '1995-03-15'\n"
        "GROUP BY L_ORDERKEY, O_ORDERDATE, O_SHIPPRIORITY\n"
        "ORDER BY REVENUE DESC, O_ORDERDATE;";

    a = "-- TPC_H Query 20 - Potential Part Promotion\n"
        "SELECT S_NAME, S_ADDRESS FROM SUPPLIER, NATION\n"
        "WHERE S_SUPPKEY IN (SELECT PS_SUPPKEY FROM PARTSUPP\n"
        " WHERE PS_PARTKEY in (SELECT P_PARTKEY FROM \"PART\" WHERE P_NAME like 'forest%%') AND\n"
        " PS_AVAILQTY > (SELECT 0.5*sum(L_QUANTITY) FROM LINEITEM WHERE L_PARTKEY = PS_PARTKEY AND\n"
        "  L_SUPPKEY = PS_SUPPKEY AND L_SHIPDATE >= '1994-01-01' AND\n"
        "  L_SHIPDATE < dateadd(yy,1,'1994-01-01'))) AND S_NATIONKEY = N_NATIONKEY AND N_NAME = 'CANADA'\n"
        "ORDER BY S_NAME;";

    a = "-- TPC_H Query 13 - Customer Distribution\n"
        "SELECT C_COUNT, COUNT(*) AS CUSTDIST\n"
        "FROM (SELECT C_CUSTKEY, COUNT(O_ORDERKEY)\n"
        " FROM CUSTOMER left outer join ORDERS on C_CUSTKEY = O_CUSTKEY\n"
        " AND O_COMMENT not like '%%special%%requests%%'\n"
        " GROUP BY C_CUSTKEY) AS C_ORDERS\n"
        "GROUP BY C_COUNT\n"
        "ORDER BY CUSTDIST DESC, C_COUNT DESC;";



    a = "-- TPC_H Query 13 - Customer Distribution\n"
        "SELECT C_COUNT, COUNT(*) AS CUSTDIST\n"
        "FROM (SELECT C_CUSTKEY, COUNT(O_ORDERKEY)\n"
        " FROM CUSTOMER left outer join ORDERS on C_CUSTKEY = O_CUSTKEY\n"
        " AND O_COMMENT not like '%%special%%requests%%'\n"
        " GROUP BY C_CUSTKEY) AS C_ORDERS\n"
        "GROUP BY C_COUNT\n"
        "ORDER BY CUSTDIST DESC, C_COUNT DESC;";

    a = "SELECT alpha1 from beta1 union all (select alpha2 from gamma2) EXCEPT SELECT alpha1 from beta1";

    a = "SELECT last_name, \n"
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


    ParseResult result;
    parser::parse(a, &result);


    if (!result.accept)
        return 1;

    Node* root = result.result_tree_;
    protect(root);

    printf("before: \n%s\n", a.c_str());
    printf("after : \n%s", Node::SerializeNonRecursive(root).c_str());

    delete(root);
    return 0;
}

void protect(Node* root)
{
    if (!root)
        return;

    std::list<Node*> ss;
    Node::find_node_non_recursive(root, E_SELECT, ss);

    for (auto selit : ss)
    {
        std::list<Node**> table_direct_ref;
        Node::find_table_direct_ref(&selit, table_direct_ref);
        for (auto tb : table_direct_ref)
        {
            switch ((*tb)->nodeType_)
            {
                case E_ALIAS:
                {
                    Node* tbname = (*tb)->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                    if (tbname->nodeType_ == E_IDENTIFIER)
                    {
                        std::string aliasName = (*tb)->getChild(E_ALIAS_RELATION_NAME)->terminalToken_.str;
                        Node* ori = protect_sel(tbname->terminalToken_.str, aliasName, *tb);
                        delete(ori);
                    }
                }
                    break;
                case E_IDENTIFIER:
                {
                    Node* ori = protect_sel((*tb)->terminalToken_.str, (*tb)->terminalToken_.str, *tb);
                    delete(ori);
                }
                    break;
                default:
                    break;
            }
        }
    }

}

void ffd(Node* root, NodeType target, std::list<Node*>& ret)
{
    if (!root)
        return;
    if (target == root->nodeType_)
        ret.push_back(root);
    if (root->isTerminalToken)
        return;
    for (auto it : root->children_)
    {
        ffd(it, target, ret);
    }
}

void ffd_(Node* root, NodeType target, std::list<Node*>& ret)
{
    int stackmax = 0;
    if (!root) return;
    struct
    {
        Node* node;
        std::vector<Node*>::iterator it;
        int state = 0;
    } stack[100];

    Node* node = root;
    std::vector<Node*>::iterator it;
    if (!node->isTerminalToken)
        it = node->children_.begin();
    int top = 0, state = 0;
    while (true)
    {
        if (top >= stackmax) stackmax = top;
        if (!node)
        {
            if (top == 0)
                break;
            top--;
            node = stack[top].node;
            it = stack[top].it;
            state = stack[top].state;
        }
        else
        {
            if (0 == state)
            {
                if (node->nodeType_ == target)
                    ret.push_back(node);
            }
            else if (1 == state)
            {
                ++it;
            }
            if (it == node->children_.end() || (0 == state && node->isTerminalToken))
            {
                if (top == 0)
                    break;
                top--;
                node = stack[top].node;
                it = stack[top].it;
                state = stack[top].state;
                continue;
            }

            // call
            stack[top].node = node;
            stack[top].it = it;
            stack[top].state = 1;
            top++;

            node = *it;
            if (node && !node->isTerminalToken)
                it = node->children_.begin();
            state = 0;
        }
    }
    return;
}