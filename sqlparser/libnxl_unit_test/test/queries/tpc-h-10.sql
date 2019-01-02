 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT TOP 20 c_custkey,
              c_name,
              Sum(l_extendedprice * ( 1 - l_discount )) AS REVENUE,
              c_acctbal,
              n_name,
              c_address,
              c_phone,
              c_comment
FROM   customer,
       orders,
       lineitem,
       nation
WHERE  c_custkey = o_custkey
       AND l_orderkey = o_orderkey
       AND o_orderdate >= '1993-10-01'
       AND o_orderdate < Dateadd(mm, 3, Cast('1993-10-01' AS DATETIME))
       AND l_returnflag = 'R'
       AND c_nationkey = n_nationkey
GROUP  BY c_custkey,
          c_name,
          c_acctbal,
          c_phone,
          n_name,
          c_address,
          c_comment
ORDER  BY revenue DESC