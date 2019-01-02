 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT o_orderpriority,
       Count(*) AS ORDER_COUNT
FROM   orders
WHERE  o_orderdate >= '1993-07-01'
       AND o_orderdate < Dateadd(mm, 3, Cast('1993-07-01' AS datetime))
       AND EXISTS (SELECT *
                   FROM   lineitem
                   WHERE  l_orderkey = o_orderkey
                          AND l_commitdate < l_receiptdate)
GROUP  BY o_orderpriority
ORDER  BY o_orderpriority