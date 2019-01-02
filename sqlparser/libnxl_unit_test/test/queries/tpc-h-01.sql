 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT l_returnflag,
       l_linestatus,
       Sum(l_quantity)                                           AS SUM_QTY,
       Sum(l_extendedprice)                                      AS
       SUM_BASE_PRICE,
       Sum(l_extendedprice * ( 1 - l_discount ))                 AS
       SUM_DISC_PRICE,
       Sum(l_extendedprice * ( 1 - l_discount ) * ( 1 + l_tax )) AS SUM_CHARGE,
       Avg(l_quantity)                                           AS AVG_QTY,
       Avg(l_extendedprice)                                      AS AVG_PRICE,
       Avg(l_discount)                                           AS AVG_DISC,
       Count(*)                                                  AS COUNT_ORDER
FROM   lineitem
WHERE  l_shipdate <= Dateadd(dd, -90, Cast('1998-12-01' AS datetime))
GROUP  BY l_returnflag,
          l_linestatus
ORDER  BY l_returnflag,
          l_linestatus