 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT n_name,
       Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE
FROM   customer,
       orders,
       lineitem,
       supplier,
       nation,
       region
WHERE  c_custkey = o_custkey
       AND l_orderkey = o_orderkey
       AND l_suppkey = s_suppkey
       AND c_nationkey = s_nationkey
       AND s_nationkey = n_nationkey
       AND n_regionkey = r_regionkey
       AND r_name = 'ASIA'
       AND o_orderdate >= '1994-01-01'
       AND o_orderdate < Dateadd(yy, 1, Cast('1994-01-01' AS datetime))
GROUP  BY n_name
ORDER  BY revenue DESC