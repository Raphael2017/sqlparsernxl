-- LIST CTE
WITH cte1 (avg_c_acctbal)
     AS (SELECT Avg(c_acctbal)
         FROM   customer
         WHERE  c_acctbal > 0.00
                AND Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',
                                                  '30', '18', '17' )),
     cte2
     AS (SELECT *
         FROM   orders
         WHERE  o_custkey = c_custkey),
     cte3 (cntrycode, c_acctbal)
     AS (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,
                c_acctbal
         FROM   customer
         WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',
                                              '30', '18', '17' )
                AND c_acctbal > (SELECT avg_c_acctbal
                                 FROM   cte1)
                AND NOT EXISTS (SELECT *
                                FROM   cte2))
SELECT cntrycode,
       Count(*)       AS NUMCUST,
       Sum(c_acctbal) AS TOTACCTBAL
FROM   cte3 AS CUSTSALE
GROUP  BY cntrycode
ORDER  BY cntrycode;