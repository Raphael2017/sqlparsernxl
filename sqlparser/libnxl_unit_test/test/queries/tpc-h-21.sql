 -- TPC_H Query 21 - Suppliers Who Kept Orders Waiting
SELECT TOP 100 s_name,
               Count(*) AS NUMWAIT
FROM   supplier,
       lineitem L1,
       orders,
       nation
WHERE  s_suppkey = L1.l_suppkey
       AND o_orderkey = L1.l_orderkey
       AND o_orderstatus = 'F'
       AND L1.l_receiptdate > L1.l_commitdate
       AND EXISTS (SELECT *
                   FROM   lineitem L2
                   WHERE  L2.l_orderkey = L1.l_orderkey
                          AND L2.l_suppkey <> L1.l_suppkey)
       AND NOT EXISTS (SELECT *
                       FROM   lineitem L3
                       WHERE  L3.l_orderkey = L1.l_orderkey
                              AND L3.l_suppkey <> L1.l_suppkey
                              AND L3.l_receiptdate > L3.l_commitdate)
       AND s_nationkey = n_nationkey
       AND n_name = 'SAUDI ARABIA'
GROUP  BY s_name
ORDER  BY numwait DESC,
          s_name;