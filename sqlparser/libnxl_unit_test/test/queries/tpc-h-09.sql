 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT nation,
       o_year,
       Sum(amount) AS SUM_PROFIT
FROM   (SELECT n_name
               AS
                      NATION,
               Datepart(yy, o_orderdate)
               AS
                      O_YEAR,
               l_extendedprice * ( 1 - l_discount ) - ps_supplycost * l_quantity
               AS
                      AMOUNT
        FROM   "part",
               supplier,
               lineitem,
               partsupp,
               orders,
               nation
        WHERE  s_suppkey = l_suppkey
               AND ps_suppkey = l_suppkey
               AND ps_partkey = l_partkey
               AND p_partkey = l_partkey
               AND o_orderkey = l_orderkey
               AND s_nationkey = n_nationkey
               AND p_name LIKE '%%green%%') AS PROFIT
GROUP  BY nation,
          o_year
ORDER  BY nation,
          o_year DESC