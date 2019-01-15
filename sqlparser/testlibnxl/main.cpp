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

    {
        INode* tree = INode::Parse(a);
        auto t = tree->GetType();
        if (tree)
        {
            auto t = tree->GetType();
            IPlan* plan = IPlan::CreatePlan([](IPlan* plan, ITableItem* tbi){
                    switch (tbi->GetTableItemType())
                    {
                        case E_BASIC_TABLE:
                        {
                            printf("access base table: %-25s at (L%+3d:%-2d)\n", tbi->GetTableName().c_str(), tbi->GetLine() + 1, tbi->GetColumn());
                        }
                            break;
                        case E_BASIC_TABLE_WITH_ALIAS:
                        {
                            printf("access base table: %-25s at (L%+3d:%-2d) alias: %-10s\n", tbi->GetTableObject().c_str(), tbi->GetLine()  + 1, tbi->GetColumn(), tbi->GetTableAliasName().c_str());
                        }
                            break;
                        default:
                            break;
                    }

                },
                [](IPlan* plan, ITableColumnRefItem* cli){
                    printf("base column access : %-25s at (L%+3d:%-2d) src table : %-25s at (L%+3d:%-2d)\n",
                           cli->GetColumnName().c_str(), cli->GetLine() + 1, cli->GetColumn() + 1,
                           cli->GetTableItem()->GetTableObject().c_str(), cli->GetTableItem()->GetLine() + 1, cli->GetTableItem()->GetColumn());
                }, nullptr, tree);
            IPlan::Visit(plan);
            //printf("%s\n", concatenated.c_str());
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





