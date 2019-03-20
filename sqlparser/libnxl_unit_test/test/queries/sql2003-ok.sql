-- syntax ok
SELECT id,
       qty,
       order_desc
FROM   (SELECT id,
               qty,
               t.order_desc
        FROM   order_list t) o;

SELECT user_id,
       qty,
       order_desc
FROM   (SELECT user_id,
               Sum(qty),
               t.order_desc,
               t.order_desc
        FROM   order_list t
        GROUP  BY user_id) o;

SELECT user_id,
       qty,
       descr
FROM   (SELECT user_id,
               Sum(qty)     qty,
               t.order_desc descr,
               t.order_desc
        FROM   order_list t
        GROUP  BY user_id) o;

SELECT user_id,
       Sum(qty)    sum_qty,
       sqty + 1000 std_qty
FROM   order_list
GROUP  BY user_id;

SELECT user_id user_id
FROM   order_list;

SELECT item_id + user_id id,
       user_id + item_id AS id,
       Sum(qty)          sum_qty
FROM   order_list
GROUP  BY item_id + user_id;

SELECT user_id,
       user_age,
       user_id + user_age
FROM   USER u
WHERE  u.user_name = 'deng pu fang';

SELECT 'deng'    lname,
       'pu fang' AS fname,
       lname || fname
FROM   user u
WHERE  1;

SELECT *
FROM   user
WHERE  ( user_id, user_name, user_age, user_desc )
        IN (SELECT *
            FROM   user
            WHERE EXISTS (SELECT Count(*)
                          FROM   item));

SELECT *
FROM   user
WHERE  ( user_id, user_name, user_age )
        IN (SELECT *
            FROM   user);

SELECT *
FROM   user
WHERE  user_id IN (SELECT user_id
                   FROM   order_list);

SELECT *
FROM   user
WHERE  (SELECT Count(*)
        FROM   order_list);

SELECT *
FROM   USER
WHERE  ( user_id, user_name ) IN ( ( 1, 'tangseng' ), ( 2, 'wukong' ) );

SELECT *
FROM   user
WHERE  NOT EXISTS (SELECT Count(*)
                   FROM   order_list);

SELECT Max(qty),
       Min(qty),
       Sum(qty),
       Avg(qty),
       Count(qty),
       Count(*)
FROM   order_list;

SELECT DISTINCT Max(DISTINCT qty),
                Min(DISTINCT qty),
                Sum(DISTINCT qty),
                Avg(DISTINCT qty),
                Count(DISTINCT qty),
                Count(*)
FROM   order_list;

SELECT user_id,
       CASE
         WHEN qty > 100 THEN 'winner'
         WHEN qty < 50 THEN 'loser'
         ELSE 'nomal'
       end
FROM   order_list
WHERE  item_id = 10001;

SELECT user_id,
       user_name,
       CASE
         WHEN user_age BETWEEN 10 AND 20 THEN 'small'
         WHEN user_age BETWEEN 21 AND 50 THEN 'big'
         ELSE 'illeagal'
       end
FROM   user;

SELECT id,
       item_id,
       CASE user_id
         WHEN 1001 THEN 'number 1'
         WHEN 1002 THEN 'number 3'
         WHEN 1003 THEN 'number 3'
       end
FROM   order_list;

SELECT qty + 6 - qty * 9 / ( qty%25 )^3
FROM   order_list;

SELECT *
FROM   order_list
WHERE  qty IS NOT NULL
       AND order_desc IS NULL;

SELECT *
FROM   order_list
WHERE  qty > 10 IS TRUE
       AND user_id = 10086 IS NOT TRUE;

SELECT *
FROM   order_list
WHERE  ( qty > 10 ) IS NOT FALSE
       AND ( user_id = 10086 ) IS FALSE;

SELECT *
FROM   order_list
WHERE  order_desc IS unknown;

SELECT id || user_id || item_id || order_desc
FROM   order_list
WHERE  qty BETWEEN user_id AND qty + user_id;

SELECT *
FROM   order_list
WHERE  NOT qty BETWEEN 0 AND 1000;

SELECT id
FROM   order_list
WHERE  order_desc LIKE '%china%' NOT LIKE 'zzzzzz';

SELECT id
FROM   order_list
WHERE  qty >= 5
       AND qty <= 9999
        OR order_desc IS NOT NULL
           AND order_time IS NOT NULL;

SELECT (user_id, item_id, 10)
                  IN ((1,8,9),
                      (2,9,6),
                      (4,8,10))
FROM   order_list;

SELECT user_id,
       Sum(qty) sum_qty
FROM   order_list
GROUP  BY user_id
HAVING item_id > 9;

SELECT item_id + user_id,
       Sum(qty) sum_qty
FROM   order_list
GROUP  BY item_id + user_id
HAVING item_id + user_id > 9;

SELECT item_id + user_id id,
       user_id + item_id AS id,
       Sum(qty)          sum_qty
FROM   order_list
GROUP  BY item_id + user_id
HAVING id > 9;

SELECT user_id,
       Sum(qty)
FROM   order_list
GROUP  BY user_id
ORDER  BY (SELECT Count(*)
           FROM   item);

SELECT user_id,
       Sum(qty)
FROM   order_list
GROUP  BY user_id
ORDER  BY 1 DESC,
          2 ASC,
          3 ASC;

SELECT user_id,
       Sum(qty)
FROM   order_list
GROUP  BY user_id
ORDER  BY item_id;

SELECT user_id,
       qty,
       Sum(qty) AS sum_qty
FROM   order_list
GROUP  BY user_id
ORDER  BY sum_qty;

SELECT user_id,
       qty,
       Sum(qty) AS qty
FROM   order_list
GROUP  BY user_id
ORDER  BY qty;

SELECT user_id,
       qty,
       Sum(qty) AS qty
FROM   order_list
GROUP  BY user_id
ORDER  BY item_id,
          Max(order_time) DESC;

SELECT u.user_id + 1000 AS standard_uid,
       user_name,
       Sum(qty)
FROM   USER AS u
       JOIN order_list o
         ON u.user_id = o.user_id,
       item AS i
WHERE  o.item_id = i.item_id
GROUP  BY standard_uid
HAVING standard_uid > 500;

SELECT user_id,
       user_name
FROM   USER
UNION ALL
SELECT item_id,
       item_name
FROM   item;

SELECT user_id,
       user_name
FROM   USER
UNION ALL
SELECT *
FROM   item;

SELECT user_id,
       user_name
FROM   USER
UNION
SELECT item_id,
       item_name
FROM   item
ORDER  BY user_id;

SELECT user_id,
       user_name
FROM   USER
UNION
SELECT item_id,
       item_name
FROM   item
UNION
SELECT item_id,
       item_name
FROM   item
ORDER  BY user_id;

(SELECT user_id,
        user_name
 FROM   USER
 UNION
 SELECT item_id,
        item_name
 FROM   item)
UNION
SELECT item_id,
       item_name
FROM   item
ORDER  BY user_id;

SELECT *
FROM   (SELECT user_id,
               user_name
        FROM   USER
        UNION
        SELECT item_id,
               item_name
        FROM   item) USER
UNION
SELECT item_id,
       item_name
FROM   item
ORDER  BY user_id;

SELECT item_id,
       user_id,
       Sum(qty)
FROM   order_list
GROUP  BY item_id,
          user_id;

SELECT Sum(qty),
       Max(qty),
       Min(qty),
       Count(*),
       Count(qty),
       Avg(qty)
FROM   order_list;

SELECT Sum(DISTINCT qty),
       Max(DISTINCT qty),
       Min(DISTINCT qty),
       Count(*),
       Count(DISTINCT qty),
       Avg(DISTINCT qty)
FROM   order_list
GROUP  BY user_id;

SELECT *
FROM   USER u,
       order_list AS o,
       item;

SELECT DISTINCT *
FROM   order_list;

SELECT DISTINCT id,
                user_id,
                qty
FROM   order_list
ORDER  BY item_id DESC;

SELECT id,
       qty
FROM   order_list
WHERE  Length(order_desc) > 5
        OR user_id < 1000;

SELECT id,
       qty
FROM   order_list o,
       item i
WHERE  o.item_id = i.item_id
        OR item_cost > 10;

SELECT user_id,
       Sum(qty)
FROM   order_list
WHERE  user_id < 1000
GROUP  BY user_id
HAVING Max(qty) > 100;

SELECT user_id  AS uid,
       Sum(qty) AS total
FROM   order_list
WHERE  user_id < 1000
GROUP  BY uid;

SELECT user_id  AS uid,
       Sum(qty) AS total
FROM   order_list
WHERE  user_id < 1000
GROUP  BY total;

SELECT user_name,
       id,
       qty
FROM   USER
       LEFT OUTER JOIN order_list
                    ON USER.user_id = order_list.user_id;

SELECT id,
       item_name,
       qty
FROM   order_list o
       RIGHT OUTER JOIN item AS i
                     ON o.item_id = i.item_id;

SELECT id,
       user_name,
       item_name,
       qty
FROM   USER
       LEFT JOIN order_list o
              ON USER.user_id = o.user_id
       RIGHT OUTER JOIN item AS i
                     ON o.item_id = i.item_id;

SELECT user_name,
       id,
       qty
FROM   USER,
       order_list
WHERE  USER.user_id > order_list.user_id;

SELECT u.*,
       o.*,
       i.*
FROM   USER u,
       order_list o,
       item i
WHERE  i.item_id = order_list.item_id
       AND u.user_id > o.user_id;

SELECT id
FROM   order_list
WHERE  qty > 100
ORDER  BY user_id;

SELECT id,
       qty / 1000 unit
FROM   order_list
WHERE  qty > 100
ORDER  BY user_id;

SELECT user_id,
       item_id,
       Sum(qty)
FROM   order_list
GROUP  BY user_id + item_id;

SELECT DISTINCT id,
                user_id + item_id,
                qty
FROM   order_list;

SELECT DISTINCT id,
                user_id id,
                item_id id,
                qty
FROM   order_list;

SELECT i.*,
       o.*
FROM   item i,
       order_list o
WHERE  i.item_id = o.item_id;

SELECT DISTINCT user_id + item_id,
                qty
FROM   order_list
ORDER  BY user_id,
          item_id;

SELECT id,
       qty
FROM   (SELECT *
        FROM   order_list) o
WHERE  user_id > 50;

SELECT *
FROM   order_list
WHERE  qty = (SELECT Max(qty)
              FROM   order_list);

SELECT id,
       qty,
       (SELECT Count(*)
        FROM   order_list) total_count
FROM   order_list
WHERE  qty = (SELECT Max(qty)
              FROM   order_list);

SELECT *
FROM   order_list
WHERE  id < 100
UNION DISTINCT
SELECT *
FROM   order_list
WHERE  id > 100;

SELECT *
FROM   order_list
WHERE  user_id < 100
INTERSECT
SELECT *
FROM   order_list
WHERE  item_id > 0;

SELECT *
FROM   order_list
WHERE  id < 100
EXCEPT
SELECT *
FROM   order_list
WHERE  id > 100;

SELECT user_name,
       id,
       qty
FROM   USER,
       order_list
WHERE  USER.user_id > order_list.user_id
       AND user_age > 20
       AND item_id BETWEEN 0 AND 100;

SELECT id,
       qty
FROM   order_list
WHERE  order_desc LIKE '%happy%';

SELECT user_id  uid,
       Sum(qty) AS total
FROM   order_list
WHERE  uid < 1000;

SELECT DISTINCT depid AS department_number
FROM   worker
WHERE  wsex = '女';

SELECT *
FROM   depart
WHERE  dmaster IS NULL;

SELECT wid,
       actualsalary
FROM   salary
WHERE  actualsalary > 3000;

SELECT wid,
       actualsalary
FROM   salary
WHERE  actualsalary BETWEEN 2000 AND 3000;

SELECT wid,
       wname,
       depid
FROM   worker
WHERE  depid IN( '1', '2' );

SELECT wid,
       wname,
       wsex
FROM   worker
WHERE  wname LIKE '孙%';

SELECT wid,
       wname,
       wsex
FROM   worker
WHERE  wname NOT LIKE '_华%';

SELECT Avg(totalsalary) AS average_wage
FROM   salary
WHERE  sdate = '2014-01-04';

SELECT Count(*) AS total_workers
FROM   worker;

SELECT Count(DISTINCT wid) AS total_workers
FROM   salary;

SELECT Min(actualsalary) AS minimum_wage
FROM   salary;

SELECT Sum(actualsalary) AS total_wage
FROM   salary
WHERE  sdate = '2011-01-04';

SELECT wid,
       wname,
       wbirthdate,
       depid
FROM   worker
ORDER  BY depid DESC,
          wbirthdate DESC;

SELECT wsex     AS sex,
       Count(*) AS total_workers
FROM   worker
GROUP  BY wsex;

SELECT sdate            AS date_of_payroll,
       Sum(totalsalary) AS total_payable_wages
FROM   salary
GROUP  BY sdate;

SELECT wid              AS staff_number,
       Sum(totalsalary) AS total_page
FROM   salary
GROUP  BY wid
HAVING Sum(totalsalary) > 5000;

SELECT depid    AS department_number,
       Count(*) AS party_member_number
FROM   worker
WHERE  wparty = '是'
GROUP  BY depid
HAVING Count(*) >= 1;

SELECT wid,
       wname,
       dname
FROM   worker x,
       depart y
WHERE  x.depid = y.did
ORDER  BY wid DESC;

SELECT wid,
       wname,
       dname
FROM   worker x
       INNER JOIN depart y
               ON x.depid = y.did
ORDER  BY wid DESC;

SELECT x.wid        AS staff_number,
       wname        AS full_name,
       dname        AS department_name,
       actualsalary AS february_wages
FROM   worker x,
       depart y,
       salary z
WHERE  x.depid = y.did
       AND x.wid = z.wid
       AND Year(sdate) = 2011
       AND Month(sdate) = 2
ORDER  BY dname DESC;

SELECT *
FROM   worker
       LEFT OUTER JOIN study
                    ON worker.wid = study.wid;

SELECT worker.*,
       study.*
FROM   worker
       RIGHT OUTER JOIN study
                     ON worker.wid = study.wid;

SELECT *
FROM   worker
       FULL OUTER JOIN study
                    ON worker.wid = study.wid;

SELECT *
FROM   worker
       CROSS JOIN study;

SELECT dname    AS department_name,
       Count(*) AS party_member_number
FROM   depart
       INNER JOIN worker
               ON depart.did = worker.depid
                  AND wparty = 'yes'
GROUP  BY dname;

SELECT wid,
       sdate,
       totalsalary,
       actualsalary
FROM   salary
UNION
SELECT '小计',
       NULL,
       Sum(totalsalary),
       Sum(actualsalary)
FROM   salary;

WITH result(wid, wname, dname)
     AS (SELECT wid,
                wname,
                dname
         FROM   worker
                INNER JOIN depart
                        ON worker.depid = depart.did
                           AND dname = '人事处')
SELECT *
FROM   result;

SELECT dbo.account.salary
FROM   dbo.account;

SELECT firstname,
       lastname,
       baserate,
       baserate * 40 AS GrossPay
FROM   dimemployee
ORDER  BY lastname;

SELECT orderdatekey,
       Sum(salesamount) AS TotalSales
FROM   factinternetsales
GROUP  BY orderdatekey
ORDER  BY orderdatekey;

SELECT orderdatekey,
       promotionkey,
       Avg(salesamount) AS AvgSales,
       Sum(salesamount) AS TotalSales
FROM   factinternetsales
GROUP  BY orderdatekey,
          promotionkey
ORDER  BY orderdatekey;

SELECT orderdatekey,
       Sum(salesamount) AS TotalSales
FROM   factinternetsales
WHERE  orderdatekey > '20020801'
GROUP  BY orderdatekey
ORDER  BY orderdatekey;

SELECT Sum(salesamount) AS TotalSales
FROM   factinternetsales
GROUP  BY ( orderdatekey * 10 );

SELECT orderdatekey,
       Sum(salesamount) AS TotalSales
FROM   factinternetsales
GROUP  BY orderdatekey
ORDER  BY orderdatekey;

SELECT orderdatekey,
       Sum(salesamount) AS TotalSales
FROM   factinternetsales
GROUP  BY orderdatekey
HAVING orderdatekey > 20010000
ORDER  BY orderdatekey;

SELECT DISTINCT NAME
FROM   production.product AS p
WHERE  EXISTS (SELECT *
               FROM   production.productmodel AS pm
               WHERE  p.productmodelid = pm.productmodelid
                      AND pm.NAME LIKE 'Long-Sleeve Logo Jersey%');

SELECT DISTINCT NAME
FROM   production.product
WHERE  productmodelid IN (SELECT productmodelid
                          FROM   production.productmodel
                          WHERE  NAME LIKE 'Long-Sleeve Logo Jersey%');

SELECT DISTINCT p.lastname,
                p.firstname
FROM   person.person AS p
       JOIN humanresources.employee AS e
         ON e.businessentityid = p.businessentityid
WHERE  5000.00 IN (SELECT bonus
                   FROM   sales.salesperson AS sp
                   WHERE  e.businessentityid = sp.businessentityid);

SELECT DISTINCT pp.lastname,
                pp.firstname
FROM   person.person pp
       JOIN humanresources.employee e
         ON e.businessentityid = pp.businessentityid
WHERE  pp.businessentityid IN (SELECT salespersonid
                               FROM   sales.salesorderheader
                               WHERE  salesorderid IN
                                      (SELECT salesorderid
                                       FROM   sales.salesorderdetail
                                       WHERE
                                      productid IN (SELECT productid
                                                    FROM   production.product p
                                                    WHERE
                                      productnumber = 'BK-M68B-42')));

SELECT Avg(orderqty) AS [Average Quantity],
       NonDiscountSales = ( orderqty * unitprice )
FROM   sales.salesorderdetail
GROUP  BY ( orderqty * unitprice )
ORDER  BY ( orderqty * unitprice ) DESC;

SELECT productid,
       Avg(unitprice) AS [Average Price]
FROM   sales.salesorderdetail
WHERE  orderqty > 10
GROUP  BY productid
ORDER  BY Avg(unitprice);

SELECT productid
FROM   sales.salesorderdetail
GROUP  BY productid
HAVING Avg(orderqty) > 5
ORDER  BY productid;

SELECT salesorderid,
       carriertrackingnumber
FROM   sales.salesorderdetail
GROUP  BY salesorderid,
          carriertrackingnumber
HAVING carriertrackingnumber LIKE '4BD%'
ORDER  BY salesorderid;

SELECT productid
FROM   sales.salesorderdetail
WHERE  unitprice < 25.00
GROUP  BY productid
HAVING Avg(orderqty) > 5
ORDER  BY productid;

SELECT productid,
       Avg(orderqty)  AS AverageQuantity,
       Sum(linetotal) AS Total
FROM   sales.salesorderdetail
GROUP  BY productid
HAVING Sum(linetotal) > 1000000.00
       AND Avg(orderqty) < 3;

SELECT productid,
       Total = Sum(linetotal)
FROM   sales.salesorderdetail
GROUP  BY productid
HAVING Sum(linetotal) > 2000000.00;

SELECT productid,
       Sum(linetotal) AS Total
FROM   sales.salesorderdetail
GROUP  BY productid
HAVING Count(*) > 1500;

SELECT productmodelid,
       NAME
FROM   production.productmodel
WHERE  productmodelid NOT IN ( 3, 4 )
UNION
SELECT productmodelid,
       NAME
FROM   dbo.gloves
ORDER  BY NAME;

SELECT productmodelid,
       NAME
FROM   production.productmodel
WHERE  productmodelid NOT IN ( 3, 4 )
UNION
SELECT productmodelid,
       NAME
FROM   dbo.gloves
ORDER  BY NAME;

SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeeone
UNION ALL
SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeetwo
UNION ALL
SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeethree;

SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeeone
UNION
SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeetwo
UNION
SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeethree;

SELECT lastname,
       firstname,
       jobtitle
FROM   dbo.employeeone
UNION ALL
(SELECT lastname,
        firstname,
        jobtitle
 FROM   dbo.employeetwo
 UNION
 SELECT lastname,
        firstname,
        jobtitle
 FROM   dbo.employeethree);

SELECT p.productid,
       v.businessentityid
FROM   production.product AS p
       JOIN purchasing.productvendor AS v
         ON ( p.productid = v.productid );

SELECT e.businessentityid,
       d.NAME AS Department
FROM   humanresources.employee AS e
       CROSS JOIN humanresources.department AS d
ORDER  BY e.businessentityid,
          d.NAME;

-- The OUTER keyword following the FULL keyword is optional.
SELECT p.NAME,
       sod.salesorderid
FROM   production.product AS p
       FULL OUTER JOIN sales.salesorderdetail AS sod
                    ON p.productid = sod.productid
ORDER  BY p.NAME;

-- By default, SQL Server performs an INNER JOIN if only the JOIN
-- keyword is specified.
SELECT p.NAME,
       sod.salesorderid
FROM   production.product AS p
       INNER JOIN sales.salesorderdetail AS sod
               ON p.productid = sod.productid
ORDER  BY p.NAME;

SELECT st.NAME AS Territory,
       sp.businessentityid
FROM   sales.salesterritory AS st
       RIGHT OUTER JOIN sales.salesperson AS sp
                     ON st.territoryid = sp.territoryid;

UPDATE item
SET    item_name = item_name
                   || ''jiu gui jiu'',
       item_cost = 89,
       item_price = 99
WHERE  item_id = (SELECT Max(item_id)
                  FROM   item);

UPDATE item
SET    item_name = 'jiu gui jiu',
       item_cost = 89,
       item_price = 99
WHERE  item_id = (SELECT Max(item_id)
                  FROM   item);

UPDATE item
SET    item_cost = 89,
       item_price = Max(item_cost)
WHERE  item_id = 100;

UPDATE item
SET    item_cost = (SELECT Min(item_price)
                    FROM   item)
WHERE  item_id = 100;

UPDATE item
SET    item_cost = item_name LIKE '%jing%'
WHERE  item_id = 100;

UPDATE person.address
SET    modifieddate = Getdate();

UPDATE sales.salesperson
SET    bonus = 6000,
       commissionpct = .10,
       salesquota = NULL;

UPDATE production.product
SET    color = N'Metallic Red'
WHERE  NAME LIKE N'Road-250%'
       AND color = N'Red';

UPDATE production.product
SET    listprice = listprice * 2;

UPDATE production.scrapreason
SET    NAME = ' - tool malfunction'
WHERE  scrapreasonid BETWEEN 10 AND 12;

UPDATE sales.salesperson
SET    salesytd = salesytd
                  + (SELECT Sum(so.subtotal)
                     FROM   sales.salesorderheader AS so
                     WHERE  so.orderdate = (SELECT Max(orderdate)
                                            FROM   sales.salesorderheader AS so2
                                            WHERE  so2.salespersonid =
                                           so.salespersonid)
                            AND sales.salesperson.businessentityid =
                                so.salespersonid
                     GROUP  BY so.salespersonid);

UPDATE production.location
SET    costrate = DEFAULT
WHERE  costrate > 20.00;

UPDATE person.vstateprovincecountryregion
SET    countryregionname = 'United States of America'
WHERE  countryregionname = 'United States';

UPDATE sales.salesperson
SET    salesytd = salesytd
                  + (SELECT Sum(so.subtotal)
                     FROM   sales.salesorderheader AS so
                     WHERE  so.orderdate = (SELECT Max(orderdate)
                                            FROM   sales.salesorderheader AS so2
                                            WHERE  so2.salespersonid =
                                           so.salespersonid)
                            AND sales.salesperson.businessentityid =
                                so.salespersonid
                     GROUP  BY so.salespersonid);

UPDATE mylinkedserver.adventureworks2012.humanresources.department
SET    groupname = N'Public Relations'
WHERE  departmentid = 4;

UPDATE production.product
SET    listprice = listprice * 1.10
WHERE  productnumber LIKE 'BK-%'

INSERT INTO USER
VALUES      (100,
             'da fen qi',
             15,
             'a turtle');

INSERT INTO USER
            (user_id,
             user_name,
             user_desc)
VALUES      (100,
             'da fen qi',
             'a turtle');

INSERT INTO USER
            (user_id,
             user_name,
             user_desc)
VALUES      (100,
             'da fen qi',
             'a turtle'),
            (101,
             'mi kai lang ji luo',
             'another turtle'),
            (102,
             'la fei er',
             'the third turtle');

INSERT INTO USER
SELECT *
FROM   item;

INSERT INTO USER
VALUES      (89 +- 1,
             'new' || 'name',
             45,
             'have identifer');

INSERT INTO USER
            (user_id,
             user_name)
SELECT item_id,
       item_name
FROM   item;

INSERT INTO cities
            (location)
VALUES      ( CONVERT('12.3:46.2' USING point) );

INSERT INTO production.unitmeasure
VALUES      (N'FT',
             N'Feet',
             '20080414');

INSERT INTO production.unitmeasure
VALUES      (N'FT2',
             N'Square Feet ',
             '20080923'),
            (N'Y',
             N'Yards',
             '20080923'),
            (N'Y3',
             N'Cubic Yards',
             '20080923');

INSERT INTO production.unitmeasure
            (NAME,
             unitmeasurecode,
             modifieddate)
VALUES      (N'Square Yards',
             N'Y2',
             Getdate());

INSERT INTO dbo.t1
            (column_4)
VALUES      ('Explicit value');

INSERT INTO dbo.t1
            (column_2,
             column_4)
VALUES      ('Explicit value',
             'Explicit value');

INSERT INTO dbo.t1
            (column_2)
VALUES      ('Explicit value');

INSERT INTO t1
DEFAULT VALUES;

INSERT INTO dbo.t1
            (column_2)
VALUES      (Newid());

INSERT INTO dbo.employeesales
SELECT 'SELECT',
       sp.businessentityid,
       c.lastname,
       sp.salesytd
FROM   sales.salesperson AS sp
       INNER JOIN person.person AS c
               ON sp.businessentityid = c.businessentityid
WHERE  sp.businessentityid LIKE '2%'
ORDER  BY sp.businessentityid,
          c.lastname;

INSERT INTO employeetitles
SELECT employeekey,
       lastname,
       title
FROM   ssawpdw.dbo.dimemployee
WHERE  enddate IS NULL;

DELETE FROM production.productcosthistory
WHERE  standardcost > 1000.00;

DELETE FROM production.productcosthistory
WHERE  standardcost BETWEEN 12.00 AND 14.00
       AND enddate IS NULL;

DELETE FROM sales.salespersonquotahistory
WHERE  businessentityid IN (SELECT businessentityid
                            FROM   sales.salesperson
                            WHERE  salesytd > 2500000.00);

DELETE FROM sales.salespersonquotahistory;

DELETE FROM production.productcosthistory
WHERE  standardcost > 1000.00;

-- SQL-2003 Standard subquery
DELETE FROM sales.salespersonquotahistory
WHERE  businessentityid IN (SELECT businessentityid
                            FROM   sales.salesperson
                            WHERE  salesytd > 2500000.00);

DELETE FROM dbo.FactInternetSales
WHERE ProductKey IN (
    SELECT T1.ProductKey FROM dbo.DimProduct T1
    JOIN dbo.DimProductSubcategory T2
    ON T1.ProductSubcategoryKey = T2.ProductSubcategoryKey
    WHERE T2.EnglishProductSubcategoryName = 'Road Bikes' )

DELETE FROM USER
WHERE  user_name = 'zhang wu ji';

DELETE FROM USER
WHERE  item_name = 'jiu yin zhen jing';




