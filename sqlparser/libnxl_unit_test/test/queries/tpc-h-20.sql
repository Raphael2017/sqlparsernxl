 -- TPC_H Query 20 - Potential Part Promotion
SELECT s_name,
       s_address
FROM   supplier,
       nation
WHERE  s_suppkey IN (SELECT ps_suppkey
                     FROM   partsupp
                     WHERE  ps_partkey IN (SELECT p_partkey
                                           FROM   "part"
                                           WHERE  p_name LIKE 'forest%%')
                            AND ps_availqty > (SELECT 0.5 * Sum(l_quantity)
                                               FROM   lineitem
                                               WHERE  l_partkey = ps_partkey
                                                      AND l_suppkey = ps_suppkey
                                                      AND l_shipdate >=
                                                          '1994-01-01'
                                                      AND l_shipdate < Dateadd(
                                                          yy, 1,
                                                          '1994-01-01'))
                    )
       AND s_nationkey = n_nationkey
       AND n_name = 'CANADA'
ORDER  BY s_name;