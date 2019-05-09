-- tools
-- select a.name TABLE_NAME,b.name COLUMN_NAME,c.name COLUMN_DATA_TYPE,c.length COLUMN_DATA_LENGTH from sysobjects a,syscolumns b,systypes c where a.id=b.id and a.name='LINEITEM' and a.xtype='U' and b.xtype=c.xtype
-- https://www.cnblogs.com/sunxuchu/p/5578057.html
-- [DATABASE].[SCHEMA].[TABLE]  means table object

-- [TEST01].[SA].[LINEITEM]
IF OBJECT_ID('TEST01.SA.LINEITEM','U') is not null
    Drop table TEST01.SA.LINEITEM;

CREATE TABLE TEST01.SA.LINEITEM (
line_item_id int IDENTITY (1,1) PRIMARY KEY ,
l_returnflag int default 0,
l_quantity Decimal (12,4) default 0,
l_extendedprice Money default null,
l_discount Decimal (12,4) default 0,
l_tax Money default null,
l_shipdate Datetime,
l_linestatus int,
l_orderkey nVarChar(50) default '',
l_commitdate Datetime,
l_receiptdate Datetime,
);

INSERT INTO TEST01.SA.LINEITEM
       (l_returnflag,l_linestatus,l_extendedprice,l_tax,  l_shipdate  , l_quantity,l_discount,l_orderkey         ,l_commitdate,l_receiptdate)
VALUES (3           ,0           ,'10'           ,'0.1'  ,'1908-12-01', 12.34     ,0.89      ,'VK7JG-NPHTM-C97JM','1908-11-30','1908-12-02' ),
       (2           ,1           ,'21'           ,'0.2'  ,'1998-12-20', 11.65     ,0.56      ,'W269N-WFGWX-YVC9B','1998-12-19','1998-12-20' ),
       (2           ,0           ,'$2'           ,'0.1'  ,'1998-01-08', 21.12     ,0.78      ,'YNMGQ-8RYV3-4PGQ3','1998-01-07','1998-01-09' ),
       (2           ,0           ,'34'           ,'0.2'  ,'1998-02-25', 12.56     ,0.89      ,'8KFHP-DKV6R-Y2C8J','1998-02-24','1998-02-26' ),
       (2           ,1           ,'$6'           ,'0.1'  ,'1998-12-20', 03.14     ,0.56      ,'FXBX8-QWJK7-DRR8H','1998-12-18','1998-12-20' ),
       (1           ,0           ,'21'           ,'0.2'  ,'2009-09-10', 02.17     ,0.89      ,'QYCPR-T7PJ7-X766F','2009-09-07','2009-09-10' ),
       (0           ,2           ,'$5'           ,'0.1'  ,'2019-08-20', 12.56     ,0.78      ,'N47XK-V7XM9-C7227','2019-08-18','2019-08-20' ),
       (1           ,0           ,'32'           ,'0.2'  ,'2000-07-20', 90.09     ,0.56      ,'PF93Q-4GGP8-M8RF3','2000-07-19','2000-07-21' ),
       (2           ,1           ,'$11'          ,'0.1'  ,'1998-06-11', 67.64     ,0.89      ,'YVC9B-4J6C9-T83GX','1998-06-10','1998-06-14' ),
       (3           ,0           ,'$1'           ,'0.2'  ,'1978-01-13', 21.46     ,0.89      ,'NJ4MX-VQQ7Q-FP3DB','1978-01-11','1978-01-13' ),
       (4           ,1           ,'23'           ,'0.1'  ,'1998-02-27', 70.01     ,0.78      ,'372YJ-YJJ4Q-G83YB','1998-02-24','1998-02-27' ),
       (2           ,1           ,'50'           ,'0.1'  ,'1998-03-06', 54.56     ,0.89      ,'QNGF2-D34FM-99QX3','1998-03-04','1998-03-07' ),
       (0           ,1           ,'90'           ,'0.1'  ,'1998-11-02', 34.28     ,0.78      ,'3RRR8-39X6W-W44T3','1998-11-01','1998-11-02' );

SELECT case ROW_NUMBER() OVER ( ORDER BY line_item_id ) when 1 then 'TEST01.SA.LINEITEM:  ' else null end , * FROM TEST01.SA.LINEITEM;

-- [TEST01].[SA].[CUSTOMER]
IF OBJECT_ID('TEST01.SA.CUSTOMER','U') is not null
    Drop table TEST01.SA.CUSTOMER;
CREATE TABLE TEST01.SA.CUSTOMER (
customer_id int IDENTITY (1,1) PRIMARY KEY ,
c_custkey nVarChar(50) default '',
c_mktsegment nVarChar(50) default '',
c_privilege_level int,
);

INSERT INTO TEST01.SA.CUSTOMER
       (c_custkey           ,c_mktsegment        ,c_privilege_level)
VALUES ('adksljdasjlkdasdas','building'          ,0                ),
       ('adljkasljkd0213123','retail'            ,1                ),
       ('asdazcilkdfg909090','food processing'   ,0                ),
       ('pljgbjggbbgbb76yhh','Catering'          ,2                ),
       ('rewqghfgfvbbv88900','FMCG'              ,1                ),
       ('plmkijasdt7777asda','Beverage'          ,0                ),
       ('prtfvdceas67671230','Education'         ,2                ),
       ('89898asdsadjjjasdh','FMCG'              ,1                ),
       ('09asd87877878asdda','Catering'          ,1                ),
       ('12sad99asd9asdvvvv','retail'            ,1                ),
       ('jhgfhfhgad7788788d','building'          ,1                ),
       ('poiuasdyghasd76766','Beverage'          ,1                ),
       ('ioyurtadsfgcvasd90','Catering'          ,1                ),
       ('lkhgfasdfbfdasvgas','retail'            ,0                ),
       ('lokijhgasdw545wqee','Education'         ,0                ),
       ('12312asdhkyqeiuqwe','FMCG'              ,0                );

SELECT case ROW_NUMBER() OVER ( ORDER BY customer_id ) when 1 then 'TEST01.SA.CUSTOMER:  ' else null end , * FROM TEST01.SA.CUSTOMER;

-- [TEST01].[SA].[ORDERS]
-- 表名	    字段名	            字段类型	  字段长度

IF OBJECT_ID('TEST01.SA.ORDERS','U') is not null
    Drop table TEST01.SA.ORDERS;
CREATE TABLE TEST01.SA.ORDERS (
order_id int IDENTITY (1,1) PRIMARY KEY ,
o_custkey nVarChar(50) default '',
o_orderkey nVarChar(50) default '',
o_orderdate Datetime,
o_shippriority int,
o_orderpriority int,
);

INSERT INTO TEST01.SA.ORDERS
       (o_custkey           ,o_orderkey         ,o_orderdate        ,o_shippriority,o_orderpriority)
VALUES ('09asd87877878asdda','W269N-WFGWX-YVC9B','1833-07-10'       ,4             ,3              ),
       ('rewqghfgfvbbv88900','VK7JG-NPHTM-C97JM','1825-11-30'       ,2             ,3              ),
       ('ioyurtadsfgcvasd90','YNMGQ-8RYV3-4PGQ3','1888-02-03'       ,3             ,3              ),
       ('09asd87877878asdda','8KFHP-DKV6R-Y2C8J','1991-03-02'       ,1             ,2              ),
       ('09asd87877878asdda','QYCPR-T7PJ7-X766F','1935-05-30'       ,0             ,1              ),
       ('lkhgfasdfbfdasvgas','FXBX8-QWJK7-DRR8H','1855-06-01'       ,5             ,1              ),
       ('09asd87877878asdda','PF93Q-4GGP8-M8RF3','1855-04-01'       ,2             ,1              ),
       ('12312asdhkyqeiuqwe','N47XK-V7XM9-C7227','1813-12-18'       ,5             ,1              ),
       ('09asd87877878asdda','YVC9B-4J6C9-T83GX','2019-11-01'       ,3             ,2              ),
       ('plmkijasdt7777asda','NJ4MX-VQQ7Q-FP3DB','1987-10-23'       ,4             ,2              ),
       ('09asd87877878asdda','372YJ-YJJ4Q-G83YB','2017-08-26'       ,1             ,2              ),
       ('lkhgfasdfbfdasvgas','3RRR8-39X6W-W44T3','1853-02-27'       ,5             ,0              ),
       ('09asd87877878asdda','QNGF2-D34FM-99QX3','1930-09-06'       ,5             ,0              );

SELECT case ROW_NUMBER() OVER ( ORDER BY order_id ) when 1 then 'TEST01.SA.ORDERS:  ' else null end , * FROM TEST01.SA.ORDERS;


-- policy description
-- table object : { server:bard-dbc-executer.qapf1.qalab01.nextlabs.com, database:TEST01, schema:SA, table:CUSTOMER }
-- if (user.u_management_level == 0 )
--    user can operate{SELECT | UPDATE | DELETE | INSERT} this table object without any restrictions
-- else if (user.u_management_level == 1)
--    user can {SELECT | UPDATE | DELETE} this table object without any restrictions
--    user can't {INSERT} this table object
-- else if (user.u_management_level == 2)
--    user can {SELECT | UPDATE | DELETE} this table object with record.c_privilege_level < 1
--    user can't {INSERT} this table object
--









































-----------------------------------  <direct select statement: multiple rows>  -----------------------------------------

-- select case 1 (SIMPLE QUERY)
-- In this case, user want to query line item data
-- from 1998-12-01 to 1998-07-01 on ship date
--
SELECT *
FROM   sa.lineitem
WHERE  l_shipdate BETWEEN Cast('1997-12-01' AS datetime)
       AND Cast('1998-07-01' AS datetime)


-- select case 2  (QUERY WITH AGGREGATE FUNCTION)
-- In this case, user want to collect line item data grouping by returnflag and linestatus
-- 90 days before 1998-12-01. Summary information includes sum quantity, avg quanty, etc.
--
SELECT l_returnflag,
       l_linestatus,
       Sum(l_quantity)                                           AS SUM_QTY,
       Sum(l_extendedprice)                                      AS SUM_BASE_PRICE,
       Sum(l_extendedprice * ( 1 - l_discount ))                 AS SUM_DISC_PRICE,
       Sum(l_extendedprice * ( 1 - l_discount ) * ( 1 + l_tax )) AS SUM_CHARGE,
       Avg(l_quantity)                                           AS AVG_QTY,
       Avg(l_extendedprice)                                      AS AVG_PRICE,
       Avg(l_discount)                                           AS AVG_DISC,
       Count(*)                                                  AS COUNT_ORDER
FROM   sa.lineitem
WHERE  l_shipdate <= Dateadd(dd, -90, Cast('1998-12-01' AS datetime))
GROUP  BY l_returnflag,
          l_linestatus
ORDER  BY l_returnflag,
          l_linestatus;

-- select case 3  (CORRELATED SUBQUERY)
-- In this case, user want to collect data grouping by order key, order date and ship priority
-- from customer,orders,lineitem . Table customer and table orders is joined by customer key.
-- Table orders and table lineitem is joined by order key. Summary information includes revenue
--
SELECT l_orderkey,
       Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,
       o_orderdate,
       o_shippriority
FROM   sa.customer,
       sa.orders,
       sa.lineitem
WHERE  c_mktsegment = 'Catering'
       AND c_custkey = o_custkey
       AND l_orderkey = o_orderkey
       AND o_orderdate < '1995-03-15'
       AND l_shipdate > '1995-03-15'
GROUP  BY l_orderkey,
          o_orderdate,
          o_shippriority
ORDER  BY revenue DESC,
          o_orderdate;

-- select case 4  (MULTI-TABLE QUERY)
-- In this case, user want to collect count of orders from table orders which has
-- at least one matching record in the orders table, matching condition is the
-- customer key and commit date less than receipt date
--
SELECT o_orderpriority,
       Count(*) AS ORDER_COUNT
FROM   sa.orders
WHERE  o_orderdate >= '1983-07-01'
       AND o_orderdate < Dateadd(mm, 3, Cast('1993-07-01' AS datetime))
       AND EXISTS (SELECT *
                   FROM   sa.customer
                   WHERE  c_custkey = o_custkey)
GROUP  BY o_orderpriority
ORDER  BY o_orderpriority;

------------------------------------------------------------------------------------------------------------------------

-----------------------------------  <update statement: searched>  -----------------------------------------------------

-- update case 1
-- user want to increase privilege level of customer record which has market segment of 'building'
UPDATE TEST01.SA.CUSTOMER
SET    c_privilege_level = c_privilege_level + 1
WHERE  c_mktsegment = 'building'

-- todo update case with a subquery

------------------------------------------------------------------------------------------------------------------------

-----------------------------------  <delete statement: searched>  -----------------------------------------------------

-- delete case 1
-- user want to delete customer record which has 'FMCG' market segment
DELETE FROM TEST01.SA.CUSTOMER
WHERE  c_mktsegment = 'FMCG';

-- todo delete case with a subquery

------------------------------------------------------------------------------------------------------------------------

-----------------------------------  <insert statement>  -----------------------------------------------------

-- insert case 1
-- user want to insert some record into table customer
INSERT INTO TEST01.SA.CUSTOMER
       (c_custkey           ,c_mktsegment        ,c_privilege_level)
VALUES ('1321eqweasdsa12312','retail'            ,0                ),
       ('12313798ada1321233','retail'            ,1                ),

