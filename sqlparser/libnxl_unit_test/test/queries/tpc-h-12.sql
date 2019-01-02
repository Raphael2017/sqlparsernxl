 -- TPC_H Query 12 - Shipping Modes and Order Priority
SELECT l_shipmode,
       Sum(CASE
             WHEN o_orderpriority = '1-URGENT'
                   OR o_orderpriority = '2-HIGH' THEN 1
             ELSE 0
           end) AS HIGH_LINE_COUNT,
       Sum(CASE
             WHEN o_orderpriority <> '1-URGENT'
                  AND o_orderpriority <> '2-HIGH' THEN 1
             ELSE 0
           end) AS LOW_LINE_COUNT
FROM   orders,
       lineitem
WHERE  o_orderkey = l_orderkey
       AND l_shipmode IN ( 'MAIL', 'SHIP' )
       AND l_commitdate < l_receiptdate
       AND l_shipdate < l_commitdate
       AND l_receiptdate >= '1994-01-01'
       AND l_receiptdate < Dateadd(mm, 1, Cast('1995-09-01' AS datetime))
GROUP  BY l_shipmode
ORDER  BY l_shipmode;