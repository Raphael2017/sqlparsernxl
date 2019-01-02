 -- http://www.sqlserver-dba.com/2011/09/this-is-a-followup-on-my-earlier-post-of-sql-server-test-data-generation-testing-tools-i-had-some-requests-for-my-set-up-pr.html
-- TPC_H Query 11 - Important Stock Identification
SELECT ps_partkey,
       Sum(ps_supplycost * ps_availqty) AS VALUE
FROM   partsupp,
       supplier,
       nation
WHERE  ps_suppkey = s_suppkey
       AND s_nationkey = n_nationkey
       AND n_name = 'GERMANY'
GROUP  BY ps_partkey
HAVING Sum(ps_supplycost * ps_availqty) > (SELECT
       Sum(ps_supplycost * ps_availqty) * 0.0001000000
                                           FROM   partsupp,
                                                  supplier,
                                                  nation
                                           WHERE  ps_suppkey = s_suppkey
                                                  AND s_nationkey = n_nationkey
                                                  AND n_name = 'GERMANY')
ORDER  BY value DESC;