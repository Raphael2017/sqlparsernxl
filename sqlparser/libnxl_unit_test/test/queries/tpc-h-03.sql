 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT TOP 10 l_orderkey,
              Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,
              o_orderdate,
              o_shippriority
FROM   customer,
       orders,
       lineitem
WHERE  c_mktsegment = 'BUILDING'
       AND c_custkey = o_custkey
       AND l_orderkey = o_orderkey
       AND o_orderdate < '1995-03-15'
       AND l_shipdate > '1995-03-15'
GROUP  BY l_orderkey,
          o_orderdate,
          o_shippriority
ORDER  BY revenue DESC,
          o_orderdate;