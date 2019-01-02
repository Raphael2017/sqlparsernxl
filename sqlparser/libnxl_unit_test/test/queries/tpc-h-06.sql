 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT Sum(l_extendedprice * l_discount) AS REVENUE
FROM   lineitem
WHERE  l_shipdate >= '1994-01-01'
       AND l_shipdate < Dateadd(yy, 1, Cast('1994-01-01' AS datetime))
       AND l_discount BETWEEN .06 - 0.01 AND .06 + 0.01
       AND l_quantity < 24