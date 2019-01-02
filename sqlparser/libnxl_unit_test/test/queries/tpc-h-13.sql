 -- TPC_H Query 13 - Customer Distribution
SELECT c_count,
       Count(*) AS CUSTDIST
FROM   (SELECT c_custkey,
               Count(o_orderkey)
        FROM   customer
               LEFT OUTER JOIN orders
                            ON c_custkey = o_custkey
                               AND o_comment NOT LIKE '%%special%%requests%%'
        GROUP  BY c_custkey) AS C_ORDERS (c_custkey, c_count)
GROUP  BY c_count
ORDER  BY custdist DESC,
          c_count DESC;