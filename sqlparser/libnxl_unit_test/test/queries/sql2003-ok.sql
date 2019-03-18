-- syntax ok
select id,qty, order_desc from (select id, qty, t.order_desc from order_list t) o;
select user_id, qty, order_desc from (select user_id, sum(qty), t.order_desc, t.order_desc from order_list t group by user_id) o;
select user_id, qty, order_desc from (select user_id, sum(qty) qty, t.order_desc, t.order_desc from order_list t group by user_id) o;
select user_id, qty, descr from (select user_id, sum(qty) qty, t.order_desc descr, t.order_desc from order_list t group by user_id) o;
select user_id, sum(qty) sum_qty, sum_qty+1000 std_qty from order_list group by user_id;
select user_id user_id from order_list;
select item_id+user_id id, user_id+item_id as id, sum(qty) sum_qty from order_list group by item_id+user_id;
delete from user where user_name='zhang wu ji';
delete from user where item_name='jiu yin zhen jing';
select user_id, user_age, user_id+user_age from user u where u.user_name = 'deng pu fang';
select 'deng' lname, 'pu fang' as fname, lname||fname from user u where 1;
select * from user where (user_id, user_name, user_age, user_desc) in (select * from user where exists (select count(*) from item));
select * from user where (user_id, user_name, user_age) in (select * from user);
select * from user where user_id in (select user_id from order_list);
select * from user where (select count(*) from order_list);
select * from user where (user_id, user_name) in ((1, 'tangseng'), (2, 'wukong'));
select * from user where not exists (select count(*) from order_list);
select max(qty), min(qty), sum(qty), avg(qty), count(qty), count(*) from order_list;
select distinct max(distinct qty), min(distinct qty), sum(distinct qty), avg(distinct qty), count(distinct qty), count(*) from order_list;
select user_id, case when qty>100 then 'winner' when qty<50 then 'loser' else 'nomal' end from order_list where item_id = 10001;
select user_id, user_name, case when user_age between 10 and 20 then 'small' when user_age between 21 and 50 then 'big' else 'illeagal' end from user;
select id, item_id, case user_id when 1001 then 'number 1' when 1002 then 'number 3' when 1003 then 'number 3' end from order_list;
select qty+6 - qty*9/(qty%25)^3 from order_list;
select * from order_list where qty is not null and order_desc is null;
select * from order_list where qty>10 is true and user_id = 10086 is not true;
select * from order_list where (qty>10) is not false and (user_id = 10086) is false;
select * from order_list where order_desc is unknown;
select id||user_id||item_id||order_desc from order_list where qty between user_id and qty+user_id;
select * from order_list where not qty between 0 and 1000;
select id from order_list where order_desc like '%china%' not like 'zzzzzz';
select id from order_list where qty>=5 and qty<=9999 or order_desc is not null and order_time is not null;
select (user_id, item_id, 10) in ((1, 8, 9), (2,9,6), (4, 8,10)) from order_list;
select (user_id, item_id, 10) in ((1, 8, 9), (2,9,6), (user_id, item_id, qty)) from order_list;
select user_id, sum(qty) sum_qty from order_list group by user_id having item_id >9;
select user_id, sum(qty) sum_qty from order_list group by item_id having item_id >9;
select item_id+user_id, sum(qty) sum_qty from order_list group by item_id+user_id having item_id+user_id >9;
select item_id+user_id id, sum(qty) sum_qty from order_list group by item_id+user_id having id >9;
select item_id+user_id id, user_id+item_id as id, sum(qty) sum_qty from order_list group by item_id+user_id having id >9;
select user_id, sum(qty) from order_list group by user_id order by (select count(*) from item);
select user_id, sum(qty) from order_list group by user_id order by 1 desc, 2 asc, 3 asc;
select user_id, sum(qty) from order_list group by user_id order by item_id;
select user_id, qty, sum(qty) as sum_qty from order_list group by user_id order by sum_qty;
select user_id, qty, sum(qty) as qty from order_list group by user_id order by qty;
select user_id, qty, sum(qty) as qty from order_list group by user_id order by item_id, max(order_time) desc;
select u.user_id+1000 as standard_uid, user_name, sum(qty) from user as u join order_list o on u.user_id =o.user_id, item as i where o.item_id=i.item_id group by standard_uid having standard_uid > 500;
select user_id, user_name from user union all select item_id, item_name from item;
select user_id, user_name from user union all select * from item;
select user_id, user_name from user union select item_id, item_name from item order by user_id;
select user_id, user_name from user union select item_id, item_name from item union  select item_id, item_name from item order by user_id;
(select user_id, user_name from user union select item_id, item_name from item) union  select item_id, item_name from item order by user_id;
select * from (select user_id, user_name from user union select item_id, item_name from item) user union  select item_id, item_name from item order by user_id;
update item set item_name=item_name||'jiu gui jiu', item_cost= 89, item_price=99 where item_id=(select max(item_id) from item);
update item set item_name='jiu gui jiu', item_cost= 89, item_price=99 where item_id=(select max(item_id) from item);
update item set item_cost= 89, item_price=max(item_cost) where item_id=100;
update item set item_cost= (select min(item_price) from item) where item_id=100;
update item set item_cost= item_name like '%jing%' where item_id=100;
select item_id, user_id, sum(qty) from order_list group by item_id, user_id;
select item_id, user_id, sum(qty) from order_list group by user_id;
select sum(qty), max(qty), min(qty), count(*), count(qty), avg(qty) from order_list;
select sum(distinct qty), max(distinct qty), min(distinct qty), count(*), count(distinct qty), avg(distinct qty) from order_list group by user_id;
select *, user_id as uid from user where uid < 100;
select case when user_id < 1000 then user_name else 'young user ' || user_name end as name from user where name like '%young%';
select * from user u, order_list as o, item;
select distinct * from order_list;
select distinct * from order_list order by 1 asc, 2 desc;
select distinct id, user_id, qty from order_list order by item_id desc;
select id, qty from order_list where length(order_desc) > 5 or user_id < 1000;
select id, qty from order_list o, item i where o.item_id = i.item_id or item_cost > 10;
select user_id, sum(qty) from order_list where user_id < 1000 group by user_id having max(qty) > 100;
select user_id, sum(qty) as total from order_list where user_id < 1000 and total >100;
select user_id, sum(qty) as total from order_list where user_id < 1000 and max(qty) >100;
select user_id, sum(qty) as total from order_list where user_id < 1000 having total >100;
select user_id as uid, sum(qty) as total from order_list where user_id < 1000 group by uid;
select user_id as uid, sum(qty) as total from order_list where user_id < 1000 group by total;
select user_id, sum(qty) from order_list where user_id < 1000 group by 0;
select user_id, sum(qty) from order_list where user_id < 1000 group by 1;
select user_id, sum(qty) from order_list where user_id < 1000 group by 1, 2;
select user_name, id, qty from user left outer join order_list on user.user_id = order_list.user_id;
select id, item_name, qty from order_list o right outer join item as i on o.item_id = i.item_id;
select id, user_name, item_name, qty from user left join order_list o on user.user_id = o.user_id right outer join item as i on o.item_id = i.item_id;
select user_name, id, qty from user left outer join not_exist_table on user.user_id = not_exist_table.user_id;
select user_name, id, qty from user, order_list where user.user_id > order_list.user_id;
select u.*, o.*, i.* from user u, order_list o, item i where i.item_id = order_list.item_id and u.user_id > o.user_id;
select user_id uid, sum(qty) as total from order_list where uid < 1000 order by 1;
select user_id uid, sum(qty) as total from order_list where uid < 1000 order by 1, 2;
select id from order_list where qty > 100 order by user_id;
select id, qty/1000 unit from order_list where qty > 100 order by user_id;
select user_id, item_id, sum(qty) from order_list group by user_id + item_id;
select distinct id, user_id + item_id, qty from order_list;
select distinct id, user_id id, item_id id, qty from order_list;
select i.*, o.* from item i, order_list o where i.item_id = o.item_id;
select distinct user_id + item_id, qty from order_list order by user_id, item_id;
select id, qty from (select * from order_list) o where user_id > 50;
select * from order_list where qty = (select max(qty) from order_list);
select id, qty, (select count(*) from order_list) total_count from order_list where qty = (select max(qty) from order_list);
select * from order_list where id < 100 union distinct select * from order_list where id > 100;
select * from order_list where user_id < 100 intersect select * from order_list where item_id > 0;
select * from order_list where id < 100 except select * from order_list where id > 100;
select user_name, id, qty from user, order_list where user.user_id > order_list.user_id and user_age > 20 and item_id between 0 and 100;
select id, qty from order_list where order_desc like '%happy%';
select user_id uid, sum(qty) as total from order_list where uid < 1000;
SELECT DISTINCT depid AS department_number FROM worker WHERE wsex='女';
SELECT * FROM depart WHERE dmaster IS NULL;
SELECT wid,actualsalary FROM salary WHERE actualsalary>3000;
SELECT wid,actualsalary FROM salary WHERE actualsalary BETWEEN 2000 AND 3000;
SELECT  wid,wname,depid FROM worker WHERE depid in('1','2');
SELECT wid,wname,wsex FROM worker WHERE wname LIKE '孙%';
SELECT wid,wname,wsex FROM worker WHERE wname NOT LIKE '_华%';
SELECT AVG(totalsalary) AS average_wage FROM salary WHERE sdate='2014-01-04';
SELECT COUNT(*) AS total_workers FROM worker;
SELECT COUNT(DISTINCT wid) AS total_workers FROM salary;
SELECT MIN(actualsalary) AS minimum_wage FROM salary;
SELECT SUM(actualsalary) AS total_wage FROM salary WHERE sdate='2011-01-04';
SELECT wid,wname,wbirthdate,depid FROM worker ORDER BY depid DESC,wbirthdate DESC;
SELECT wsex AS sex, COUNT(*) AS total_workers FROM worker GROUP BY wsex;
SELECT sdate AS date_of_payroll, SUM(totalsalary) AS total_payable_wages FROM salary GROUP BY sdate;
SELECT wid AS staff_number, SUM(totalsalary) AS total_page FROM salary GROUP BY wid HAVING SUM(totalsalary)>5000;
SELECT depid AS department_number, COUNT(*) AS party_member_number FROM worker WHERE wparty='是' GROUP BY depid HAVING COUNT(*)>=1;
SELECT wid,wname,dname FROM worker x,depart y WHERE x.depid=y.did ORDER BY wid DESC;
SELECT wid,wname,dname FROM worker x INNER JOIN depart y ON x.depid=y.did ORDER BY wid DESC;
SELECT  x.wid AS staff_number ,wname AS full_name,dname AS department_name,actualsalary AS february_wages FROM worker x,depart y,salary z where x.depid=y.did AND x.wid=z.wid AND YEAR(sdate)=2011 AND MONTH(sdate)=2 ORDER BY dname DESC;
SELECT * FROM worker LEFT OUTER JOIN study ON worker.wid=study.wid;
SELECT worker.*,study.* FROM worker RIGHT OUTER JOIN study ON worker.wid=study.wid;
SELECT * FROM worker FULL OUTER JOIN study ON worker.wid=study.wid;
SELECT * FROM worker CROSS JOIN study;
SELECT dname AS department_name,COUNT(*) AS party_member_number FROM depart INNER JOIN worker ON depart.did=worker.depid AND wparty='yes' GROUP BY dname;
SELECT wid,sdate,totalsalary,actualsalary FROM salary UNION SELECT '小计',null,SUM(totalsalary),SUM(actualsalary) FROM salary;
WITH result(wid,wname,dname) AS
(
SELECT wid,wname,dname
FROM worker INNER JOIN depart ON worker.depid=depart.did and dname='人事处'
)
SELECT *
FROM result;
SELECT dbo.ACCOUNT.salary FROM dbo.ACCOUNT;
SELECT FirstName, LastName, BaseRate, BaseRate * 40 AS GrossPay FROM DimEmployee ORDER BY LastName;
SELECT OrderDateKey, SUM(SalesAmount) AS TotalSales FROM FactInternetSales GROUP BY OrderDateKey ORDER BY OrderDateKey;
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
HAVING SUM(LineTotal) > 1000000.00
   AND AVG(OrderQty) < 3;

SELECT ProductID, Total = SUM(LineTotal)
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING SUM(LineTotal) > 2000000.00;

SELECT ProductID, SUM(LineTotal) AS Total
FROM Sales.SalesOrderDetail
GROUP BY ProductID
HAVING COUNT(*) > 1500;

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

UPDATE Person.Address
SET ModifiedDate = GETDATE();

UPDATE Sales.SalesPerson
SET Bonus = 6000, CommissionPct = .10, SalesQuota = NULL;

UPDATE Production.Product
SET Color = N'Metallic Red'
WHERE Name LIKE N'Road-250%' AND Color = N'Red';

UPDATE Production.Product
SET ListPrice = ListPrice * 2;

UPDATE Production.ScrapReason
SET Name = ' - tool malfunction'
WHERE ScrapReasonID BETWEEN 10 and 12;

UPDATE Sales.SalesPerson
SET SalesYTD = SalesYTD +
    (SELECT SUM(so.SubTotal)
     FROM Sales.SalesOrderHeader AS so
     WHERE so.OrderDate = (SELECT MAX(OrderDate)
                           FROM Sales.SalesOrderHeader AS so2
                           WHERE so2.SalesPersonID = so.SalesPersonID)
     AND Sales.SalesPerson.BusinessEntityID = so.SalesPersonID
     GROUP BY so.SalesPersonID);

UPDATE Production.Location
SET CostRate = DEFAULT
WHERE CostRate > 20.00;

UPDATE Person.vStateProvinceCountryRegion
SET CountryRegionName = 'United States of America'
WHERE CountryRegionName = 'United States';

UPDATE Sales.SalesPerson
SET SalesYTD = SalesYTD +
    (SELECT SUM(so.SubTotal)
     FROM Sales.SalesOrderHeader AS so
     WHERE so.OrderDate = (SELECT MAX(OrderDate)
                           FROM Sales.SalesOrderHeader AS so2
                           WHERE so2.SalesPersonID = so.SalesPersonID)
     AND Sales.SalesPerson.BusinessEntityID = so.SalesPersonID
     GROUP BY so.SalesPersonID);

UPDATE MyLinkedServer.AdventureWorks2012.HumanResources.Department
SET GroupName = N'Public Relations'
WHERE DepartmentID = 4;

UPDATE Production.Product
SET ListPrice = ListPrice * 1.10
WHERE ProductNumber LIKE 'BK-%'

insert into user values (100, 'da fen qi', 15, 'a turtle');
insert into user (user_id, user_name, user_desc) values (100, 'da fen qi', 'a turtle');
insert into user (user_id, user_name, user_desc) values (100, 'da fen qi', 'a turtle'), (101, 'mi kai lang ji luo', 'another turtle'), (102, 'la fei er', 'the third turtle');
insert into user select * from item;
insert into user values (89+-1, 'new'||'name', 45, 'have identifer');
insert into user (user_id, user_name) select item_id, item_name from item;







