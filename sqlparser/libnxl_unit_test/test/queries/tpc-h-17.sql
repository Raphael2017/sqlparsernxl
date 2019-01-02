 -- TPC_H Query 17 - Small-Quantity-Order Revenue
SELECT Sum(l_extendedprice) / 7.0 AS AVG_YEARLY
FROM   lineitem,
       "part"
WHERE  p_partkey = l_partkey
       AND p_brand = 'Brand#23'
       AND p_container = 'MED BOX'
       AND l_quantity < (SELECT 0.2 * Avg(l_quantity)
                         FROM   lineitem
                         WHERE  l_partkey = p_partkey);