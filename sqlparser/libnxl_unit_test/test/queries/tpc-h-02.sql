 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
SELECT TOP 100 s_acctbal,
               s_name,
               n_name,
               p_partkey,
               p_mfgr,
               s_address,
               s_phone,
               s_comment
FROM   part,
       supplier,
       partsupp,
       nation,
       region
WHERE  p_partkey = ps_partkey
       AND s_suppkey = ps_suppkey
       AND p_size = 15
       AND p_type LIKE '%%BRASS'
       AND s_nationkey = n_nationkey
       AND n_regionkey = r_regionkey
       AND r_name = 'EUROPE'
       AND ps_supplycost = (SELECT Min(ps_supplycost)
                            FROM   partsupp,
                                   supplier,
                                   nation,
                                   region
                            WHERE  p_partkey = ps_partkey
                                   AND s_suppkey = ps_suppkey
                                   AND s_nationkey = n_nationkey
                                   AND n_regionkey = r_regionkey
                                   AND r_name = 'EUROPE')
ORDER  BY s_acctbal DESC,
          n_name,
          s_name,
          p_partkey