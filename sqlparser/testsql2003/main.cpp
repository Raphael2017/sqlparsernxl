#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>
#include <strings.h>
#include "Interface.h"

class CC {

};

void TTT(const std::string& concatenated)
{
    int testsFailed = 0;
    clock_t start, end;
    int tks_count = 0;
    IParseResult* parseResult = ParseSql(concatenated, DBMS_SQL2003);

    INode* tree = parseResult->GetParseTree();
    if (parseResult->IsAccept() && tree)
    {
        printf("%s\n", tree->Serialize().c_str());
        auto t = tree->GetType();
        IPlan* plan = CreatePlan([](IPlan* plan, ITableItem* tbi){

                                 },
                                 [](IPlan* plan, ITableColumnRefItem* cli){},
                                 [](IPlan* plan, uint64_t last_stmt_id){
                                     auto last_stmt = plan->GetQuery(last_stmt_id);
                                     switch (last_stmt->GetStmtType())
                                     {
                                         case E_STMT_TYPE_INSERT:
                                         {
                                             ITableItem* tbi = dynamic_cast<IInsertStmt*>(last_stmt)->GetInsertTable();
                                             printf("INSERT TARGET %s", tbi->GetTableObject().c_str());
                                         }
                                            break;
                                         default:
                                             break;
                                     }
                                     printf("\n");
                                 }, [](IPlan* plan, IWhereCluase* wc){
                    uint64_t query_id = wc->GetQueryID();
                    IStmt* stmt = plan->GetQuery(query_id);
                    ITableItem* tbi = nullptr;
                    switch (stmt->GetStmtType())
                    {
                        case E_STMT_TYPE_UPDATE:
                        {
                            ITableItem* tbi = dynamic_cast<IUpdateStmt*>(stmt)->GetUpdateTable();
                            std::string cond = "";
                            switch (tbi->GetTableItemType())
                            {
                                case E_BASIC_TABLE:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableObject() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                case E_BASIC_TABLE_WITH_ALIAS:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                default:
                                {
                                    /*do nothing*/
                                }
                                    break;
                            }
                            wc->AddCondition(cond);
                        }
                            break;
                        case E_STMT_TYPE_DELETE:
                        {
                            ITableItem* tbi = dynamic_cast<IDeleteStmt*>(stmt)->GetDeleteTable();
                            std::string cond = "";
                            switch (tbi->GetTableItemType())
                            {
                                case E_BASIC_TABLE:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableObject() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                case E_BASIC_TABLE_WITH_ALIAS:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                default:
                                {
                                    /*do nothing*/
                                }
                                    break;
                            }
                            wc->AddCondition(cond);
                        }
                            break;
                        case E_STMT_TYPE_SELECT:
                        {
                            size_t cnt = stmt->GetTableItemCount();
                            std::string cond = "";
                            size_t t = 0;
                            for (size_t i = 0; i < cnt; ++i)
                            {
                                ITableItem* tbi = stmt->GetTableItem(i);
                                if (!tbi) continue;

                                if (t > 0)
                                    cond += " AND ";

                                switch (tbi->GetTableItemType())
                                {
                                    case E_BASIC_TABLE:
                                    {
                                        if (true)
                                        {
                                            t++;
                                            cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                            cond += tbi->GetTableObject() + ".Qty > 3)";
                                        }
                                    }
                                        break;
                                    case E_BASIC_TABLE_WITH_ALIAS:
                                    {
                                        if (true)
                                        {
                                            t++;

                                            cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                            cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                        }
                                    }
                                        break;
                                    default:
                                    {
                                        /*do nothing*/
                                    }
                                        break;
                                }
                            }
                            if (t > 0)
                            {
                                wc->AddCondition(cond);
                            }
                        }
                            break;
                        default:
                            assert(false);
                    }
                }, [](IPlan* plan){
                    printf("%s\n", plan->GetErrorDetail().c_str());
                }, nullptr, parseResult);
        VisitPlan(plan);
        auto ssss = tree->Serialize();
        printf("%s\n", concatenated.c_str());
        printf("%s\n", tree->Serialize().c_str());
        DestroyParseResult(parseResult);
        DestroyPlan(plan);
    }
}

int main()
{
    std::string sql = "SELECT * FROM SALES WHERE QTY > (SELECT MAX(QTY) FROM SA.SALES01);";
    sql += "UPDATE SALES SET Qty = 0 WHERE QTY > (SELECT MAX(QTY) FROM SA.SALES01);";
    sql += "DELETE FROM SALES WHERE QTY > (SELECT MAX(QTY) FROM SA.SALES01);";
    sql += "SELECT ERROR_USE_STAR(a) FROM ABC;";
    sql += "INSERT INTO SA.SALES (ORDERID, SALESREP, Product, Qty) (SELECT * FROM SALES ORDER BY Qty);";
    sql += "INSERT INTO SA.SALES (ORDERID, SALESREP, Product, Qty) VALUES (1,2,3,(SELECT COUNT(*) FROM SA.SALES01));";
    sql += "insert into user (user_id, user_name, user_desc) values (100, 'da fen qi', 'a turtle'), (101, 'mi kai lang ji luo', 'another turtle'), (102, 'la fei er', 'the third turtle');";
    sql += "insert into user values (89+-1, 'new'||'name', 45, 'have identifer');";
    sql += "insert into user (user_id, user_name) select item_id, item_name from item;";
    sql = "INSERT INTO Cities (Location) VALUES ( CONVERT('12.3:46.2' USING POINT) );";
    sql = "INSERT INTO Cities (Location) VALUES ( dbo.CreateNewPoint(x, y) );";
    sql = "INSERT INTO Production.UnitMeasure VALUES (N'FT', N'Feet', '20080414'); ";
    sql = "INSERT INTO Production.UnitMeasure VALUES (N'FT2', N'Square Feet ', '20080923'), (N'Y', N'Yards', '20080923'), (N'Y3', N'Cubic Yards', '20080923');";
    sql = "INSERT INTO Production.UnitMeasure (Name, UnitMeasureCode, ModifiedDate) VALUES (N'Square Yards', N'Y2', GETDATE());";
    sql = "INSERT INTO dbo.T1 (column_4) VALUES ('Explicit value');\n"
          "INSERT INTO dbo.T1 (column_2, column_4) VALUES ('Explicit value', 'Explicit value');\n"
          "INSERT INTO dbo.T1 (column_2) VALUES ('Explicit value');\n"
          "INSERT INTO T1 DEFAULT VALUES;";
    sql = "INSERT INTO dbo.T1 (column_2) VALUES (NEWID());";
    sql = "INSERT INTO dbo.Points (PointValue) VALUES (CAST ('1,99' AS Point));";
    sql = "INSERT INTO dbo.EmployeeSales  \n"
          "    SELECT 'SELECT', sp.BusinessEntityID, c.LastName, sp.SalesYTD   \n"
          "    FROM Sales.SalesPerson AS sp  \n"
          "    INNER JOIN Person.Person AS c  \n"
          "        ON sp.BusinessEntityID = c.BusinessEntityID  \n"
          "    WHERE sp.BusinessEntityID LIKE '2%'  \n"
          "    ORDER BY sp.BusinessEntityID, c.LastName; ";
    sql = "INSERT INTO EmployeeTitles  \n"
          "    SELECT EmployeeKey, LastName, Title   \n"
          "    FROM ssawPDW.dbo.DimEmployee  \n"
          "    WHERE EndDate IS NULL;";
    sql = "DELETE FROM Sales.SalesPersonQuotaHistory;  ";
    sql = "DELETE FROM Production.ProductCostHistory\n"
          "WHERE StandardCost > 1000.00;";
    sql = "DELETE FROM Production.ProductCostHistory  \n"
          "WHERE StandardCost BETWEEN 12.00 AND 14.00  \n"
          "      AND EndDate IS NULL;";
    sql = "DELETE FROM Sales.SalesPersonQuotaHistory   \n"
          "WHERE BusinessEntityID IN   \n"
          "    (SELECT BusinessEntityID   \n"
          "     FROM Sales.SalesPerson   \n"
          "     WHERE SalesYTD > 2500000.00); ";
    sql = "insert into navigation(id,name,parent,path,seq_num,sub_sys,url) select '39','参数配置',11,'/3/11',1,3,null from DUAL WHERE NOT EXISTS(SELECT * FROM navigation WHERE id='39');";
    sql = ";;;SELECT 1 FROM dbo.[SALES]";
    sql = "SELECT case ROW_NUMBER() OVER ( ORDER BY line_item_id ) when 1 then 'TEST01.SA.LINEITEM:  ' else null end , * FROM TEST01.SA.LINEITEM";
    sql = "SELECT l_returnflag,\n"
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
          "FROM   sa.lineitem\n"
          "WHERE  l_shipdate <= Dateadd(dd, -90, Cast('1998-12-01' AS datetime))\n"
          "GROUP  BY l_returnflag,\n"
          "          l_linestatus\n"
          "ORDER  BY l_returnflag,\n"
          "          l_linestatus;";
    sql = "SELECT l_orderkey,\n"
          "       Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,\n"
          "       o_orderdate,\n"
          "       o_shippriority\n"
          "FROM   sa.customer,\n"
          "       sa.orders,\n"
          "       sa.lineitem\n"
          "WHERE  c_mktsegment = 'Catering'\n"
          "       AND c_custkey = o_custkey\n"
          "       AND l_orderkey = o_orderkey\n"
          "       AND o_orderdate < '1995-03-15'\n"
          "       AND l_shipdate > '1995-03-15'\n"
          "GROUP  BY l_orderkey,\n"
          "          o_orderdate,\n"
          "          o_shippriority\n"
          "ORDER  BY revenue DESC,\n"
          "          o_orderdate;";

    sql = "SELECT  SUM(population),\n"
          "CASE country\n"
          "WHEN '中国'     THEN '亚洲'\n"
          "WHEN '印度'     THEN '亚洲'\n"
          "WHEN '日本'     THEN '亚洲'\n"
          "WHEN '美国'     THEN '北美洲'\n"
          "WHEN '加拿大'  THEN '北美洲'\n"
          "WHEN '墨西哥'  THEN '北美洲'\n"
          "ELSE '其他' END\n"
          "FROM    Table_A\n"
          "GROUP BY CASE country\n"
          "WHEN '中国'     THEN '亚洲'\n"
          "WHEN '印度'     THEN '亚洲'\n"
          "WHEN '日本'     THEN '亚洲'\n"
          "WHEN '美国'     THEN '北美洲'\n"
          "WHEN '加拿大'  THEN '北美洲'\n"
          "WHEN '墨西哥'  THEN '北美洲'\n"
          "ELSE '其他' END;";
    sql = "SELECT * FROM SA.ORDERS LEFT JOIN SA.CUSTOMER ON ORDERS.o_custkey = CUSTOMER.c_custkey;";
    sql = "SELECT o_orderpriority,\n"
          "       Count(*) AS ORDER_COUNT\n"
          "FROM   sa.orders\n"
          "WHERE  o_orderdate >= '1983-07-01'\n"
          "       AND o_orderdate < Dateadd(mm, 3, Cast('1993-07-01' AS datetime))\n"
          "       AND EXISTS (SELECT *\n"
          "                   FROM   sa.customer\n"
          "                   WHERE  c_custkey = o_custkey)\n"
          "GROUP  BY o_orderpriority\n"
          "HAVING Count(*) > 10\n"
          "ORDER  BY o_orderpriority;";

    sql = "SELECT k.name, COUNT(k.name) FROM  (SELECT t.name, e.element_id  from DICT_LEAF_ELEMENTS e LEFT JOIN  DICT_ELEMENT_TYPES t ON (t.id = e.type_id)) k GROUP BY k.name";
    //sql = "INSERT INTO Orders(CustomerID, EmployeeID, OrderDate) VALUES (?, ?, ?)";
    sql = "SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, ISNULL(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= fromDate AND day_nb <= toDate GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= fromDate AND day_nb <= toDate  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, ISNULL(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= fromDate AND day_nb <= toDate GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= fromDate AND day_nb <= toDate  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON  (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC";
    sql = "DELETE FROM table1 WHERE NOT EXISTS (SELECT * FROM table2 WH1ERE table1.field1=table2.field1);";
    sql = "-- UNION, INTERSECT\n"
          "SELECT *\n"
          "FROM   (SELECT id,\n"
          "               empid,\n"
          "               empname,\n"
          "               departname,\n"
          "               startdate,\n"
          "               enddate,\n"
          "               NULL     AS palytime,\n"
          "               '调休' AS type\n"
          "        FROM   tos_checking_takeday\n"
          "        UNION\n"
          "        (SELECT id,\n"
          "                empid,\n"
          "                empname,\n"
          "                departname,\n"
          "                NULL     AS startdate,\n"
          "                NULL     AS enddate,\n"
          "                palytime,\n"
          "                '补单' AS type\n"
          "         FROM   tos_checking_repair)\n"
          "        UNION\n"
          "        (SELECT id,\n"
          "                empid,\n"
          "                empname,\n"
          "                departname,\n"
          "                statedate,\n"
          "                enddate,\n"
          "                NULL     AS palytime,\n"
          "                '请假' AS type\n"
          "         FROM   vos_vacate_labour)\n"
          "        UNION\n"
          "        (SELECT id,\n"
          "                travelempid  AS EMPID,\n"
          "                travelemp    AS empname,\n"
          "                departname,\n"
          "                actstartdate AS STATEDATE,\n"
          "                actenddate   enddate,\n"
          "                NULL         AS palytime,\n"
          "                '出差'     AS type\n"
          "         FROM   vos_travelreport)) AS T\n"
          "WHERE  1 = 1;";
    sql = "-- LIST CTE\n"
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
          "ORDER  BY cntrycode;";
    sql = "(SELECT * FROM A UNION SELECT * FROM B) INTERSECT SELECT * FROM C";
    TTT(sql);
    std::string out = "";
    bool beautify_ret = parser::beautify_sql(sql, out);
    assert(beautify_ret);
    printf(out.c_str());
    return 0;
    /*
     *
     *
     *
     * */
}