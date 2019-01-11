-- query worker top 2
SELECT TOP 2 *
FROM worker;
-- query worker top 50%
SELECT TOP 50 PERCENT *
FROM worker;
-- Query the depid of the female worker in the worker table.
-- The same depid appears only once.
SELECT DISTINCT depid AS department_number
FROM worker
WHERE wsex='女';
-- Query the salary table for the first two highest-paid employees
SELECT TOP 2 *
FROM salary INNER JOIN worker
ON salary.wid=worker.wid
ORDER BY actualsalary DESC;
-- Query the top 18% of the total salary output in the salary table
SELECT TOP 18 PERCENT *
FROM salary x,worker y
WHERE x.wid=y.wid
ORDER BY totalsalary DESC;
-- Query department information in department table where department
-- manager is empty
SELECT *
FROM depart
WHERE dmaster IS NULL;
-- Query the salary table for the number and actual salary of employees
-- whose actual salary is more than 3000
SELECT wid,actualsalary
FROM salary
WHERE actualsalary>3000;
-- Query salary table for actual salary between 2000 and 3000
SELECT wid,actualsalary
FROM salary
WHERE actualsalary BETWEEN 2000 AND 3000;
-- Query the number, name and department number of the staff and workers
-- working in "1" or "2" of the Department in the worker table
SELECT  wid,wname,depid
FROM worker
WHERE depid in('1','2');

SELECT  wid,wname,depid
FROM worker
WHERE depid=1 or depid=2;
--  Query for the number, name and gender of all workers with the surname
--  Sun in the worker (employee) table
SELECT wid,wname,wsex
FROM worker
WHERE wname LIKE '孙%';
--
SELECT wid,wname,wsex
FROM worker
WHERE wname NOT LIKE '_华%';
--
SELECT AVG(totalsalary) AS average_wage
FROM salary
WHERE sdate='2014-01-04';
--
SELECT COUNT(*) AS total_workers
FROM worker;
--
SELECT COUNT(DISTINCT wid) AS total_workers
FROM salary;
--
SELECT MIN(actualsalary) AS minimum_wage
FROM salary;
--
SELECT SUM(actualsalary) AS total_wage
FROM salary
WHERE sdate='2011-01-04';
--
SELECT wid,wname,wbirthdate,depid
FROM worker
ORDER BY depid DESC,wbirthdate DESC;
--
SELECT wsex AS sex, COUNT(*) AS total_workers
FROM worker
GROUP BY wsex;
--
SELECT sdate AS date_of_payroll, SUM(totalsalary) AS total_payable_wages
FROM salary
GROUP BY sdate;
--
SELECT wid AS staff_number, SUM(totalsalary) AS total_page
FROM salary
GROUP BY wid
HAVING SUM(totalsalary)>5000;
--
SELECT depid AS department_number, COUNT(*) AS party_member_number
FROM worker
WHERE wparty='是'
GROUP BY depid
HAVING COUNT(*)>=1;
--
SELECT wid,wname,dname
FROM worker x,depart y
WHERE x.depid=y.did
ORDER BY wid DESC;
--
SELECT wid,wname,dname
FROM worker x INNER JOIN depart y
ON x.depid=y.did
ORDER BY wid DESC;
--
SELECT  x.wid AS staff_number ,wname AS full_name,dname AS department_name,actualsalary AS february_wages
FROM worker x,depart y,salary z
where x.depid=y.did AND x.wid=z.wid AND YEAR(sdate)=2011 AND MONTH(sdate)=2
ORDER BY dname DESC;
--
SELECT  x.wid AS staff_number ,wname AS full_name,dname AS department_name,actualsalary AS february_wages
FROM worker x INNER JOIN depart y
ON x.depid=y.did INNER JOIN salary  z ON x.wid=z.wid
AND YEAR(sdate)=2011 and MONTH(sdate)=2
ORDER BY dname DESC;
--
SELECT *
FROM worker LEFT OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT worker.*,study.*
FROM worker RIGHT OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT *
FROM worker FULL OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT *
FROM worker CROSS JOIN study;
--
SELECT dname AS department_name,COUNT(*) AS party_member_number
FROM depart INNER JOIN worker
ON depart.did=worker.depid AND wparty='yes'
GROUP BY dname;
--
SELECT wid as ID,wname as full_name,wsex as sex,wbirthdate as birth_date
FROM worker
WHERE wsex='男'
UNION
SELECT cid,cname,csex,cbirthdate
FROM customer
WHERE csex='男';
--
SELECT wid,sdate,totalsalary,actualsalary
FROM salary
UNION
SELECT '小计',null,SUM(totalsalary),SUM(actualsalary)
FROM salary;
--
WITH result(wid,wname,dname) AS
(
SELECT wid,wname,dname
FROM worker INNER JOIN depart ON worker.depid=depart.did and dname='人事处'
)
SELECT *
FROM result;
-- Transact-SQL object ref (4 part)
SELECT dbo.ACCOUNT.salary
FROM dbo.ACCOUNT;

--https://docs.microsoft.com/zh-cn/sql/t-sql/queries/select-transact-sql?view=sql-server-2017
SELECT *
FROM DimEmployee
ORDER BY LastName;

SELECT e.*
FROM DimEmployee AS e
ORDER BY LastName;

SELECT FirstName, LastName, StartDate AS FirstDay
FROM DimEmployee
ORDER BY LastName;

SELECT FirstName, LastName, StartDate AS FirstDay
FROM DimEmployee
WHERE EndDate IS NOT NULL
AND MaritalStatus = 'M'
ORDER BY LastName;

SELECT FirstName, LastName, BaseRate, BaseRate * 40 AS GrossPay
FROM DimEmployee
ORDER BY LastName;

SELECT DISTINCT Title
FROM DimEmployee
ORDER BY Title;

SELECT OrderDateKey, SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
GROUP BY OrderDateKey
ORDER BY OrderDateKey;

SELECT OrderDateKey, PromotionKey, AVG(SalesAmount) AS AvgSales, SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
GROUP BY OrderDateKey, PromotionKey
ORDER BY OrderDateKey;

SELECT OrderDateKey, SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
WHERE OrderDateKey > '20020801'
GROUP BY OrderDateKey
ORDER BY OrderDateKey;

SELECT SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
GROUP BY (OrderDateKey * 10);

SELECT OrderDateKey, SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
GROUP BY OrderDateKey
ORDER BY OrderDateKey;

SELECT OrderDateKey, SUM(SalesAmount) AS TotalSales
FROM FactInternetSales
GROUP BY OrderDateKey
HAVING OrderDateKey > 20010000
ORDER BY OrderDateKey;

SELECT DISTINCT Name
FROM Production.Product AS p
WHERE EXISTS
    (SELECT *
     FROM Production.ProductModel AS pm
     WHERE p.ProductModelID = pm.ProductModelID
           AND pm.Name LIKE 'Long-Sleeve Logo Jersey%');

SELECT DISTINCT Name
FROM Production.Product
WHERE ProductModelID IN
    (SELECT ProductModelID
     FROM Production.ProductModel
     WHERE Name LIKE 'Long-Sleeve Logo Jersey%');

SELECT DISTINCT p.LastName, p.FirstName
FROM Person.Person AS p
       JOIN HumanResources.Employee AS e
            ON e.BusinessEntityID = p.BusinessEntityID WHERE 5000.00 IN
                                                             (SELECT Bonus
                                                              FROM Sales.SalesPerson AS sp
                                                              WHERE e.BusinessEntityID = sp.BusinessEntityID);

SELECT DISTINCT pp.LastName, pp.FirstName
FROM Person.Person pp JOIN HumanResources.Employee e
                           ON e.BusinessEntityID = pp.BusinessEntityID WHERE pp.BusinessEntityID IN
                                                                             (SELECT SalesPersonID
                                                                              FROM Sales.SalesOrderHeader
                                                                              WHERE SalesOrderID IN
                                                                                    (SELECT SalesOrderID
                                                                                     FROM Sales.SalesOrderDetail
                                                                                     WHERE ProductID IN
                                                                                           (SELECT ProductID
                                                                                            FROM Production.Product p
                                                                                            WHERE ProductNumber = 'BK-M68B-42')));

SELECT AVG(OrderQty) AS [Average Quantity],
       NonDiscountSales = (OrderQty * UnitPrice)
FROM Sales.SalesOrderDetail
GROUP BY (OrderQty * UnitPrice)
ORDER BY (OrderQty * UnitPrice) DESC;

SELECT ProductID, AVG(UnitPrice) AS [Average Price]
FROM Sales.SalesOrderDetail
WHERE OrderQty > 10
GROUP BY ProductID
ORDER BY AVG(UnitPrice);

SELECT ProductID
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING AVG(OrderQty) > 5
ORDER BY ProductID;

SELECT SalesOrderID, CarrierTrackingNumber
FROM Sales.SalesOrderDetail
GROUP BY SalesOrderID, CarrierTrackingNumber
HAVING CarrierTrackingNumber LIKE '4BD%'
ORDER BY SalesOrderID ;

SELECT ProductID
FROM Sales.SalesOrderDetail
WHERE UnitPrice < 25.00
GROUP BY ProductID
HAVING AVG(OrderQty) > 5
ORDER BY ProductID;

SELECT ProductID, AVG(OrderQty) AS AverageQuantity, SUM(LineTotal) AS Total
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING SUM(LineTotal) > $1000000.00
   AND AVG(OrderQty) < 3;

SELECT ProductID, Total = SUM(LineTotal)
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING SUM(LineTotal) > $2000000.00;

SELECT ProductID, SUM(LineTotal) AS Total
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING COUNT(*) > 1500;

SELECT pp.FirstName, pp.LastName, e.NationalIDNumber
FROM HumanResources.Employee AS e WITH (INDEX(AK_Employee_NationalIDNumber))
JOIN Person.Person AS pp on e.BusinessEntityID = pp.BusinessEntityID
WHERE LastName = 'Johnson';

SELECT pp.LastName, pp.FirstName, e.JobTitle
FROM HumanResources.Employee AS e WITH (INDEX = 0) JOIN Person.Person AS pp
ON e.BusinessEntityID = pp.BusinessEntityID
WHERE LastName = 'Johnson';

SELECT ProductID, OrderQty, SUM(LineTotal) AS Total
FROM Sales.SalesOrderDetail
WHERE UnitPrice < $5.00
GROUP BY ProductID, OrderQty
ORDER BY ProductID, OrderQty
OPTION (HASH GROUP, FAST 10);

SELECT BusinessEntityID, JobTitle, HireDate, VacationHours, SickLeaveHours
FROM HumanResources.Employee AS e1
UNION
SELECT BusinessEntityID, JobTitle, HireDate, VacationHours, SickLeaveHours
FROM HumanResources.Employee AS e2
OPTION (MERGE UNION);

SELECT ProductModelID, Name
FROM Production.ProductModel
WHERE ProductModelID NOT IN (3, 4)
UNION
SELECT ProductModelID, Name
FROM dbo.Gloves
ORDER BY Name;

SELECT ProductModelID, Name
FROM Production.ProductModel
WHERE ProductModelID NOT IN (3, 4)
UNION
SELECT ProductModelID, Name
FROM dbo.Gloves
ORDER BY Name;

SELECT LastName, FirstName, JobTitle
FROM dbo.EmployeeOne
UNION ALL
SELECT LastName, FirstName ,JobTitle
FROM dbo.EmployeeTwo
UNION ALL
SELECT LastName, FirstName,JobTitle
FROM dbo.EmployeeThree;

SELECT LastName, FirstName,JobTitle
FROM dbo.EmployeeOne
UNION
SELECT LastName, FirstName, JobTitle
FROM dbo.EmployeeTwo
UNION
SELECT LastName, FirstName, JobTitle
FROM dbo.EmployeeThree;

SELECT LastName, FirstName,JobTitle
FROM dbo.EmployeeOne
UNION ALL
(
  SELECT LastName, FirstName, JobTitle
  FROM dbo.EmployeeTwo
  UNION
  SELECT LastName, FirstName, JobTitle
  FROM dbo.EmployeeThree
);

SELECT p.ProductID, v.BusinessEntityID
FROM Production.Product AS p
       JOIN Purchasing.ProductVendor AS v
            ON (p.ProductID = v.ProductID);

SELECT COUNT(*)
FROM HumanResources.Employee WITH (TABLOCK, HOLDLOCK) ;

SELECT e.BusinessEntityID, d.Name AS Department
FROM HumanResources.Employee AS e
       CROSS JOIN HumanResources.Department AS d
ORDER BY e.BusinessEntityID, d.Name ;

-- The OUTER keyword following the FULL keyword is optional.
SELECT p.Name, sod.SalesOrderID
FROM Production.Product AS p
       FULL OUTER JOIN Sales.SalesOrderDetail AS sod
                       ON p.ProductID = sod.ProductID
ORDER BY p.Name ;

SELECT p.Name, sod.SalesOrderID
FROM Production.Product AS p
       LEFT OUTER JOIN Sales.SalesOrderDetail AS sod
                       ON p.ProductID = sod.ProductID
ORDER BY p.Name ;

-- By default, SQL Server performs an INNER JOIN if only the JOIN
-- keyword is specified.
SELECT p.Name, sod.SalesOrderID
FROM Production.Product AS p
       INNER JOIN Sales.SalesOrderDetail AS sod
                  ON p.ProductID = sod.ProductID
ORDER BY p.Name ;

SELECT st.Name AS Territory, sp.BusinessEntityID
FROM Sales.SalesTerritory AS st
       RIGHT OUTER JOIN Sales.SalesPerson AS sp
                        ON st.TerritoryID = sp.TerritoryID ;

SELECT p.Name AS ProductName, v.Name AS VendorName
FROM Production.Product AS p
       INNER MERGE JOIN Purchasing.ProductVendor AS pv
                        ON p.ProductID = pv.ProductID
       INNER HASH JOIN Purchasing.Vendor AS v
                       ON pv.BusinessEntityID = v.BusinessEntityID
ORDER BY p.Name, v.Name ;

SELECT RTRIM(p.FirstName) + ' ' + LTRIM(p.LastName) AS Name, d.City
FROM Person.Person AS p
       INNER JOIN HumanResources.Employee e ON p.BusinessEntityID = e.BusinessEntityID
       INNER JOIN
     (SELECT bea.BusinessEntityID, a.City
      FROM Person.Address AS a
             INNER JOIN Person.BusinessEntityAddress AS bea
                        ON a.AddressID = bea.AddressID) AS d
     ON p.BusinessEntityID = d.BusinessEntityID
ORDER BY p.LastName, p.FirstName;

SELECT DeptID, DeptName, DeptMgrID, EmpID, EmpLastName, EmpSalary
FROM Departments d
       CROSS APPLY dbo.GetReports(d.DeptMgrID) ;

SELECT DeptID, DeptName, DeptMgrID, EmpID, EmpLastName, EmpSalary
FROM Departments d
       OUTER APPLY dbo.GetReports(d.DeptMgrID) ;

SELECT dbid, object_id, query_plan
FROM sys.dm_exec_cached_plans AS cp
       CROSS APPLY sys.dm_exec_query_plan(cp.plan_handle);

SELECT DepartmentNumber,
       DepartmentName,
       ManagerID,
       ParentDepartmentNumber
FROM DEPARTMENT
     FOR SYSTEM_TIME AS OF '2014-01-01'
WHERE ManagerID = 5;

SELECT DepartmentNumber,
       DepartmentName,
       ManagerID,
       ParentDepartmentNumber
FROM DEPARTMENT
     FOR SYSTEM_TIME FROM '2013-01-01' TO '2014-01-01'
WHERE ManagerID = 5;

SELECT DepartmentNumber,
       DepartmentName,
       ManagerID,
       ParentDepartmentNumber
FROM DEPARTMENT
     FOR SYSTEM_TIME BETWEEN '2013-01-01' AND '2014-01-01'
WHERE ManagerID = 5;

SELECT DepartmentNumber,
       DepartmentName,
       ManagerID,
       ParentDepartmentNumber
FROM DEPARTMENT
     FOR SYSTEM_TIME CONTAINED IN ( '2013-01-01', '2014-01-01' )
WHERE ManagerID = 5;

SELECT 'AverageCost' AS Cost_Sorted_By_Production_Days,
       [0], [1], [2], [3], [4]
FROM
  (SELECT DaysToManufacture, StandardCost
   FROM Production.Product) AS SourceTable
    PIVOT
    (
    AVG(StandardCost)
    FOR DaysToManufacture IN ([0], [1], [2], [3], [4])
    ) AS PivotTable;

SELECT VendorID, [250] AS Emp1, [251] AS Emp2, [256] AS Emp3, [257] AS Emp4, [260] AS Emp5
FROM
  (SELECT PurchaseOrderID, EmployeeID, VendorID
   FROM Purchasing.PurchaseOrderHeader) p
    PIVOT
    (
    COUNT (PurchaseOrderID)
    FOR EmployeeID IN
    ( [250], [251], [256], [257], [260] )
    ) AS pvt
ORDER BY pvt.VendorID

SELECT VendorID, Employee, Orders
FROM
  (SELECT VendorID, Emp1, Emp2, Emp3, Emp4, Emp5
   FROM pvt) p
    UNPIVOT
    (Orders FOR Employee IN
    (Emp1, Emp2, Emp3, Emp4, Emp5)
    )AS unpvt;

SELECT c.FirstName, c.LastName, e.JobTitle, a.AddressLine1, a.City,
       sp.Name AS [State/Province], a.PostalCode
       INTO dbo.EmployeeAddresses
FROM Person.Person AS c
       JOIN HumanResources.Employee AS e
            ON e.BusinessEntityID = c.BusinessEntityID
       JOIN Person.BusinessEntityAddress AS bea
            ON e.BusinessEntityID = bea.BusinessEntityID
       JOIN Person.Address AS a
            ON bea.AddressID = a.AddressID
       JOIN Person.StateProvince as sp
            ON sp.StateProvinceID = a.StateProvinceID;
