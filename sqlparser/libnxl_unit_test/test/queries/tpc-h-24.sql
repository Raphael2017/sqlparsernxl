WITH cte1
     AS (SELECT *
         FROM   abc)
SELECT *
FROM   (WITH cte1
             AS (SELECT *
                 FROM   umd)
        SELECT *
         FROM   cte1) AS CMM