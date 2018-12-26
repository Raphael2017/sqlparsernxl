-- UNION, INTERSECT
SELECT *
FROM   (SELECT id,
               empid,
               empname,
               departname,
               startdate,
               enddate,
               NULL     AS palytime,
               '调休' AS type
        FROM   tos_checking_takeday
        UNION
        (SELECT id,
                empid,
                empname,
                departname,
                NULL     AS startdate,
                NULL     AS enddate,
                palytime,
                '补单' AS type
         FROM   tos_checking_repair)
        UNION
        (SELECT id,
                empid,
                empname,
                departname,
                statedate,
                enddate,
                NULL     AS palytime,
                '请假' AS type
         FROM   vos_vacate_labour)
        UNION
        (SELECT id,
                travelempid  AS EMPID,
                travelemp    AS empname,
                departname,
                actstartdate AS STATEDATE,
                actenddate   enddate,
                NULL         AS palytime,
                '出差'     AS type
         FROM   vos_travelreport)) AS T
WHERE  1 = 1;