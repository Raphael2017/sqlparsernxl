 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
-- TPC_H Query 16 - Parts/Supplier Relationship
SELECT p_brand,
       p_type,
       p_size,
       Count(DISTINCT ps_suppkey) AS SUPPLIER_CNT
FROM   partsupp,
       "part"
WHERE  p_partkey = ps_partkey
       AND p_brand <> 'Brand#45'
       AND p_type NOT LIKE 'MEDIUM POLISHED%%'
       AND p_size IN ( 49, 14, 23, 45,
                       19, 3, 36, 9 )
       AND ps_suppkey NOT IN (SELECT s_suppkey
                              FROM   supplier
                              WHERE  s_comment LIKE '%%Customer%%Complaints%%')
GROUP  BY p_brand,
          p_type,
          p_size
ORDER  BY supplier_cnt DESC,
          p_brand,
          p_type,
          p_size;