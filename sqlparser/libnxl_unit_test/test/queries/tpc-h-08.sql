 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT o_year,
       Sum(CASE
             WHEN nation = 'BRAZIL' THEN volume
             ELSE 0
           end) / Sum(volume) AS MKT_SHARE
FROM   (SELECT Datepart(yy, o_orderdate)            AS O_YEAR,
               l_extendedprice * ( 1 - l_discount ) AS VOLUME,
               N2.n_name                            AS NATION
        FROM   "part",
               supplier,
               lineitem,
               orders,
               customer,
               nation N1,
               nation N2,
               region
        WHERE  p_partkey = l_partkey
               AND s_suppkey = l_suppkey
               AND l_orderkey = o_orderkey
               AND o_custkey = c_custkey
               AND c_nationkey = N1.n_nationkey
               AND N1.n_regionkey = r_regionkey
               AND r_name = 'AMERICA'
               AND s_nationkey = N2.n_nationkey
               AND o_orderdate BETWEEN '1995-01-01' AND '1996-12-31'
               AND p_type = 'ECONOMY ANODIZED STEEL') AS ALL_NATIONS
GROUP  BY o_year
ORDER  BY o_year