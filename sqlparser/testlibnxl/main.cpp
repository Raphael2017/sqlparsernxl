#include "parser.h"
#include <algorithm>
#include <time.h>
#include <assert.h>

#include "Interface.h"


int main()
{
    std::string a = "";

    a = "select db1..account.salary from db1..account";
    a = "select ID,Title from Article_Detail order by id OFFSET (15 * (50-1)) ROW FETCH NEXT 15 rows only";
    a = "select column_alias=sum(field1) alpha from account";
    a = "select * from acc for browse";
    a = "select * from acc as tbdelta with(index(1,5,10) ,NOLOCK,ROWLOCK ), bcc with(ROWLOCK)";

    a = "select * from A INNER LOOP JOIN B ON A.x=B.y";
    a = "select * from A OPTION(FAST 1,LOOP JOIN)";

    a = "select [select] from [from]";

    a = "select 1; select 2; ;select 3;";

    a = "select f.un(fd1) from MM;";

    a = "SELECT RANK() OVER(PARTITION BY fd1 ORDER BY (select * from tb1)) from tb";

    a = "SELECT BusinessEntityID, TerritoryID   \n"
        "    ,CONVERT(varchar(20),SalesYTD,1) AS  SalesYTD  \n"
        "    ,DATEPART(yy,ModifiedDate) AS SalesYear  \n"
        "    ,CONVERT(varchar(20),SUM(SalesYTD) OVER (PARTITION BY TerritoryID   \n"
        "                                             ORDER BY DATEPART(yy,ModifiedDate)   \n"
        "                                             ROWS BETWEEN CURRENT ROW AND 1 FOLLOWING ),1) AS CumulativeTotal  \n"
        "FROM Sales.SalesPerson  \n"
        "WHERE TerritoryID IS NULL OR TerritoryID < 5;";

    a = "-- Uses AdventureWorks  \n"
        "\n"
        "SELECT SalesOrderNumber AS OrderNumber, ProductKey AS Product,   \n"
        "       OrderQuantity AS Qty,   \n"
        "       SUM(OrderQuantity) OVER(PARTITION BY SalesOrderNumber) AS Total,  \n"
        "       CAST(1. * OrderQuantity / SUM(OrderQuantity)   \n"
        "        OVER(PARTITION BY SalesOrderNumber)   \n"
        "            *100 AS DECIMAL(5,2)) AS PctByProduct  \n"
        "FROM dbo.FactResellerSales   \n"
        "WHERE SalesOrderNumber IN(N'SO43659',N'SO43664') AND  \n"
        "      ProductKey LIKE '2%'  \n"
        "ORDER BY SalesOrderNumber,ProductKey;";

    a = "select db1..account.salary from db1..account";
    a = "select sc1hema.account.salary from (select * from sc1hema.account)";

    a = "select * from account AS ali with(NOLOCK)";

    a = "SELECT a, b FROM (VALUES (1, 2), (3, NULL), (5, 6), (7, 8), (9, 10) ) AS MyTable(a, b);";
    a = "SELECT pp.FirstName, pp.LastName, e.NationalIDNumber\n"
        "FROM HumanResources.Employee AS e WITH (INDEX(AK_Employee_NationalIDNumber))\n"
        "JOIN Person.Person AS pp on e.BusinessEntityID = pp.BusinessEntityID\n"
        "WHERE LastName = 'Johnson';";

    a = "SELECT LastName, FirstName,JobTitle \n"
        "FROM dbo.EmployeeOne\n"
        "UNION ALL\n"
        "(\n"
        "SELECT LastName, FirstName, JobTitle \n"
        "FROM dbo.EmployeeTwo\n"
        "UNION\n"
        "SELECT LastName, FirstName, JobTitle \n"
        "FROM dbo.EmployeeThree\n"
        ");";

    a = "SELECT DeptID, DeptName, DeptMgrID, EmpID, EmpLastName, EmpSalary  \n"
        "FROM Departments d    \n"
        "CROSS APPLY dbo.GetReports(d.DeptMgrID) ;";

    a = "SELECT DepartmentNumber,\n"
        "       DepartmentName,\n"
        "       ManagerID,\n"
        "       ParentDepartmentNumber\n"
        "FROM DEPARTMENT\n"
        "     FOR SYSTEM_TIME AS OF '2014-01-01'\n"
        "WHERE ManagerID = 5;";

    a = "SELECT 'AverageCost' AS Cost_Sorted_By_Production_Days,   \n"
        "[0], [1], [2], [3], [4]  \n"
        "FROM  \n"
        "(SELECT DaysToManufacture, StandardCost   \n"
        "    FROM Production.Product) AS SourceTable  \n"
        "PIVOT  \n"
        "(  \n"
        "AVG(StandardCost)  \n"
        "FOR DaysToManufacture IN ([0], [1], [2], [3], [4])  \n"
        ") AS PivotTable; ";

    a = "SELECT VendorID, [250] AS Emp1, [251] AS Emp2, [256] AS Emp3, [257] AS Emp4, [260] AS Emp5  \n"
        "FROM   \n"
        "(SELECT PurchaseOrderID, EmployeeID, VendorID  \n"
        "FROM Purchasing.PurchaseOrderHeader) p  \n"
        "PIVOT  \n"
        "(  \n"
        "COUNT (PurchaseOrderID)  \n"
        "FOR EmployeeID IN  \n"
        "( [250], [251], [256], [257], [260] )  \n"
        ") AS pvt  \n"
        "ORDER BY pvt.VendorID;";

    a = "UPDATE dbo.Table2   \n"
        "SET dbo.Table2.ColB - dbo.Table2.ColB + dbo.Table1.ColB  \n"
        "FROM dbo.Table2   \n"
        "    INNER JOIN dbo.Table1   \n"
        "    ON (dbo.Table2.ColA = dbo.Table1.ColA)";

    a = "SELECT * from @TMPVAR";

    a = "SELECT c.FirstName, c.LastName, e.JobTitle, a.AddressLine1, a.City,   \n"
        "    sp.Name AS [State/Province], a.PostalCode  \n"
        "INTO dbo.EmployeeAddresses  \n"
        "FROM Person.Person AS c  \n"
        "    JOIN HumanResources.Employee AS e   \n"
        "    ON e.BusinessEntityID = c.BusinessEntityID  \n"
        "    JOIN Person.BusinessEntityAddress AS bea  \n"
        "    ON e.BusinessEntityID = bea.BusinessEntityID  \n"
        "    JOIN Person.Address AS a  \n"
        "    ON bea.AddressID = a.AddressID  \n"
        "    JOIN Person.StateProvince as sp   \n"
        "    ON sp.StateProvinceID = a.StateProvinceID;";

    a = "SELECT * \n"
        "FROM SA.SALES \n"
        "WHERE QTY=(\n"
        "        SELECT QTY \n"
        "        FROM SALES \n"
        "        WHERE QTY=SA.SALES.QTY)";

    a = "SELECT * \n"
        "FROM SALES \n"
        "WHERE OrderID=(\n"
        "        SELECT QTY \n"
        "        FROM SA.SALES \n"
        "        WHERE dbo.SALES.OrderID=SALES.OrderID)";
    a = "select Dateadd(dd, -90, Cast('1998-12-01' AS datetime))";

    a = "SELECT N1.OrderID\n"
        "FROM (SELECT * FROM Sales) N1";

    a = "SELECT Sales.* FROM dbo.Sales";
    a = "SELECT * \n"
        "FROM SA.SALES \n"
        "WHERE OrderID=(\n"
        "        SELECT QTY \n"
        "        FROM SALES \n"
        "        WHERE OrderID=SA.SALES.OrderID)";
    a = "\n"
        "\n"
        "UPDATE [dbo].[Product] SET [CreateDate] = DEFAULT;\n"
        "SELECT 1";

    a = "SELECT * FROM A AA INNER JOIN (B BB INNER JOIN C CC ON p=q) ON r=s";
    a = "SELECT SALES.Qty + N1.a, N1.d + N1.a, N1.b FROM (SELECT Qty a, Product b, Qty d FROM SALES) N1, (SELECT * FROM (SELECT OrderID+Qty Qty FROM SALES) KK) SALES";
    a = "SELECT d FROM (SELECT OrderID,SalesRep,Product, OrderID FROM (SELECT * FROM SALES) N) AA(a,b,c,d);";
    a = "SELECT Qty FROM (SELECT * FROM (SELECT Qty aa,OrderID Qty FROM (SELECT * FROM SALES) N) N1) N";
    a = "WITH CT(a) AS (SELECT OrderID FROM SALES)\n"
        "SELECT a from CT";
    a = "SELECT a FROM (SELECT a=Qty FROM SALES) QQ";
    a = "SELECT qq, Qty From (SELECT 1, OrderID, Qty FROM SALES) N(qq, OrderID, Qty)";
    a = "SELECT SALES.Qty + N1.a, N1.d + N1.a, N1.b+SALES.Qty FROM (SELECT Qty a, Product b, Qty d FROM SALES) N1, (SELECT * FROM (SELECT OrderID+Qty Qty FROM SALES) KK) SALES";
    a = "SELECT *\n"
        "FROM   sa.sales WITH(nolock nowait)\n"
        "       LEFT JOIN sa.Sales01 N\n"
        "              ON sales.orderid = N.Qty\n"
        "WHERE  sales.Product <> 'Wheel'";
    a = "SELECT *\n"
        "FROM   (SELECT *\n"
        "        FROM   sa.Sales01) N\n"
        "       LEFT JOIN sa.sales\n"
        "              ON N.orderid = sales.Qty";
    a = "SELECT VendorID, [250] AS Emp1, [251] AS Emp2, [256] AS Emp3, [257] AS Emp4, [260] AS Emp5\n"
        "FROM\n"
        "  (SELECT PurchaseOrderID, EmployeeID, VendorID\n"
        "   FROM Purchasing.PurchaseOrderHeader) p\n"
        "    PIVOT\n"
        "    (\n"
        "    COUNT (PurchaseOrderID)\n"
        "    FOR EmployeeID IN\n"
        "    ( [250], [251], [256], [257], [260] )\n"
        "    ) AS pvt\n"
        "ORDER BY pvt.VendorID";
    a = "SELECT * FROM SA.SALES A LEFT JOIN SA.Sales01 B RIGHT JOIN SA.SALES C ON C.OrderID < B.Qty ON A.Qty = B.OrderID";
    a = "WITH Parts(AssemblyID, ComponentID, PerAssemblyQty, EndDate, ComponentLevel) AS  \n"
        "(  \n"
        "    SELECT b.ProductAssemblyID, b.ComponentID, b.PerAssemblyQty,  \n"
        "        b.EndDate, 0 AS ComponentLevel  \n"
        "    FROM Production.BillOfMaterials AS b  \n"
        "    WHERE b.ProductAssemblyID = 800  \n"
        "          AND b.EndDate IS NULL  \n"
        "    UNION ALL  \n"
        "    SELECT bom.ProductAssemblyID, bom.ComponentID, p.PerAssemblyQty,  \n"
        "        bom.EndDate, ComponentLevel + 1  \n"
        "    FROM Production.BillOfMaterials AS bom   \n"
        "        INNER JOIN Parts AS p  \n"
        "        ON bom.ProductAssemblyID = p.ComponentID  \n"
        "        AND bom.EndDate IS NULL  \n"
        ")  \n"
        "UPDATE Production.BillOfMaterials  \n"
        "SET PerAssemblyQty = c.PerAssemblyQty * 2  \n"
        "FROM Production.BillOfMaterials AS c  \n"
        "JOIN Parts AS d ON c.ProductAssemblyID = d.AssemblyID  \n"
        "WHERE d.ComponentLevel = 0;";
    a = "UPDATE HumanResources.Employee  \n"
        "SET VacationHours = VacationHours + 8  \n"
        "FROM (SELECT TOP 10 BusinessEntityID FROM HumanResources.Employee  \n"
        "     ORDER BY HireDate ASC) AS th  \n"
        "WHERE HumanResources.Employee.BusinessEntityID = th.BusinessEntityID;";
    a = "UPDATE TOP (10) HumanResources.Employee\n"
        "SET VacationHours = VacationHours * 1.25 ;";
    a = "UPDATE SA.SALES SET Qty=0 FROM SA.SALES01 N, SA.SALES01 ";
    a = "UPDATE sr\n"
        "SET sr.Name += ' - tool malfunction'\n"
        "FROM Production.ScrapReason AS sr\n"
        "JOIN Production.WorkOrder AS wo\n"
        "     ON sr.ScrapReasonID = wo.ScrapReasonID\n"
        "     AND wo.ScrappedQty > 300;";
    a = "UPDATE SA.SALES01 SET Qty=(SELECT 1)";
    a = "SELECT * FROM A LEFT JOIN B ON x=y LEFT JOIN C ON m=n";
    a = "SELECT * FROM A LEFT JOIN B LEFT JOIN C ON x=y ON m=n, alpha";
    a = "SELECT * FROM (SELECT * FROM SALES)";
    a = "SELECT Qty FROM SA.SALES01 WHERE Qty >  (SELECT 1 FROM SA.SALES WHERE 1=1)";
    {
        IParseResult* parseResult = ParseSql(a);
        if (!parseResult->IsAccept())
            return 0;
        INode* tree = parseResult->GetParseTree();
        printf("%s\n", tree->Serialize().c_str());
        if (tree)
        {
            auto t = tree->GetType();
            IStmt* stmt = nullptr;
            IPlan* plan = CreatePlan([&stmt](IPlan* plan, ITableItem* tbi){
                stmt = plan->GetQuery(tbi->GetQueryID());
                switch (tbi->GetTableItemType())
                {
                    case E_BASIC_TABLE:
                    {
                        std::string a = tbi->GetTableObject();
                        std::string s = tbi->GetTableHint();
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
            },[](IPlan* plan, IWhereCluase* wc){
                uint64_t query_id = wc->GetQueryID();
                assert(query_id != OB_INVALID_ID);
                IStmt* stmt = plan->GetQuery(query_id);
                size_t cnt = stmt->GetTableItemCount();
                std::string cond = "";
                size_t t = 0;
                for (size_t i = 0; i < cnt; ++i)
                {
                    ITableItem* tbi = stmt->GetTableItem(i);
                    if (!tbi) continue;



                    switch (tbi->GetTableItemType())
                    {
                        case E_BASIC_TABLE:
                        {
                            //if (tbi->GetTableName() == "Sales01")
                            {
                                if (t > 0)
                                    cond += " AND ";
                                t++;
                                cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                cond += tbi->GetTableObject() + ".Qty > 4)";
                            }
                        }
                            break;
                        case E_BASIC_TABLE_WITH_ALIAS:
                        {
                            //if (tbi->GetTableName() == "Sales01")
                            {
                                if (t > 0)
                                    cond += " AND ";
                                t++;
                                assert(tbi->GetTableAliasName().length() > 0);
                                cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                cond += tbi->GetTableAliasName() + ".Qty > 4)";
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
                if (stmt->GetStmtType() == E_STMT_TYPE_UPDATE)
                {
                    IUpdateStmt* ustmt = dynamic_cast<IUpdateStmt*>(stmt);
                    if (ustmt->IsBasicTableOrAlias())
                    {
                        ITableItem* u = ustmt->GetUpdateTable();
                        switch (u->GetTableItemType())
                        {
                            case E_BASIC_TABLE:
                            {
                                std::string qq = u->GetTableObject();
                                printf("%s\n", qq.c_str());
                            }
                                break;
                            case E_BASIC_TABLE_WITH_ALIAS:
                            {
                                std::string qq = u->GetTableAliasName();
                                printf("%s\n", qq.c_str());
                            }
                                break;
                        }
                    }
                }

            }, [](IPlan* plan){
                printf("%s\n", plan->GetErrorDetail().c_str());
            }, nullptr, tree);
            plan->SetDefaultSchema("dbo");
            plan->AddTableStructure("dbo", "SALES", {"OrderID", "SalesRep", "Product", "Qty"});
            VisitPlan(plan);

            std::string a = tree->Serialize();
            printf("%s\n", a.c_str());

            DestroyParseResult(parseResult);
            DestroyPlan(plan);
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





