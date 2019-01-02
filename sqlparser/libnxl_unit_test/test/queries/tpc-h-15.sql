 -- TPC_H Query 15.1 - Create View for Top Supplier Query
CREATE view revenue0 (supplier_no, total_revenue)
AS
  SELECT l_suppkey,
         Sum(l_extendedprice * ( 1 - l_discount ))
  FROM   lineitem
  WHERE  l_shipdate >= '1996-01-01'
         AND l_shipdate < Dateadd(mm, 3, Cast('1996-01-01' AS datetime))
  GROUP  BY l_suppkey;

-- TPC_H Query 15.2 - Top Supplier
SELECT s_suppkey,
       s_name,
       s_address,
       s_phone,
       total_revenue
FROM   supplier,
       revenue0
WHERE  s_suppkey = supplier_no
       AND total_revenue = (SELECT Max(total_revenue)
                            FROM   revenue0)
ORDER  BY s_suppkey;

-- TPC_H Query 15.3 - Drop View
DROP view revenue0;