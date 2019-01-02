 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT supp_nation,
       cust_nation,
       l_year,
       Sum(volume) AS REVENUE
FROM   (SELECT N1.n_name                            AS SUPP_NATION,
               N2.n_name                            AS CUST_NATION,
               Datepart(yy, l_shipdate)             AS L_YEAR,
               l_extendedprice * ( 1 - l_discount ) AS VOLUME
        FROM   supplier,
               lineitem,
               orders,
               customer,
               nation N1,
               nation N2
        WHERE  s_suppkey = l_suppkey
               AND o_orderkey = l_orderkey
               AND c_custkey = o_custkey
               AND s_nationkey = N1.n_nationkey
               AND c_nationkey = N2.n_nationkey
               AND ( ( N1.n_name = 'FRANCE'
                       AND N2.n_name = 'GERMANY' )
                      OR ( N1.n_name = 'GERMANY'
                           AND N2.n_name = 'FRANCE' ) )
               AND l_shipdate BETWEEN '1995-01-01' AND '1996-12-31') AS SHIPPING
GROUP  BY supp_nation,
          cust_nation,
          l_year
ORDER  BY supp_nation,
          cust_nation,
          l_year