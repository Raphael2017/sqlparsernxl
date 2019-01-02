 -- TPC_H Query 22 - Global Sales Opportunity */
SELECT cntrycode,
       Count(*)       AS NUMCUST,
       Sum(c_acctbal) AS TOTACCTBAL
FROM   (SELECT Substring(c_phone, 1, 2) AS CNTRYCODE,
               c_acctbal
        FROM   customer
        WHERE  Substring(c_phone, 1, 2) IN ( '13', '31', '23', '29',
                                             '30', '18', '17' )
               AND c_acctbal > (SELECT Avg(c_acctbal)
                                FROM   customer
                                WHERE  c_acctbal > 0.00
                                       AND Substring(c_phone, 1, 2) IN (
                                           '13', '31', '23', '29',
                                           '30', '18', '17' ))
               AND NOT EXISTS (SELECT *
                               FROM   orders
                               WHERE  o_custkey = c_custkey)) AS CUSTSALE
GROUP  BY cntrycode
ORDER  BY cntrycode;