 -- TPC_H Query 14 - Promotion Effect
SELECT 100.00 * Sum(CASE
                      WHEN p_type LIKE 'PROMO%%' THEN
                      l_extendedprice * ( 1 - l_discount )
                      ELSE 0
                    end) / Sum(l_extendedprice * ( 1 - l_discount )) AS
       PROMO_REVENUE
FROM   lineitem,
       part
WHERE  l_partkey = p_partkey
       AND l_shipdate >= '1995-09-01'
       AND l_shipdate < Dateadd(mm, 1, '1995-09-01');