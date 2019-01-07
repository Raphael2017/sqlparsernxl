-- query worker top 2
SELECT TOP 2 *
FROM worker;
-- query worker top 50%
SELECT TOP 50 PERCENT *
FROM worker;
-- Query the depid of the female worker in the worker table.
-- The same depid appears only once.
SELECT DISTINCT depid AS department_number
FROM worker
WHERE wsex='女';
-- Query the salary table for the first two highest-paid employees
SELECT TOP 2 *
FROM salary INNER JOIN worker
ON salary.wid=worker.wid
ORDER BY actualsalary DESC;
-- Query the top 18% of the total salary output in the salary table
SELECT TOP 18 PERCENT *
FROM salary x,worker y
WHERE x.wid=y.wid
ORDER BY totalsalary DESC;
-- Query department information in department table where department
-- manager is empty
SELECT *
FROM depart
WHERE dmaster IS NULL;
-- Query the salary table for the number and actual salary of employees
-- whose actual salary is more than 3000
SELECT wid,actualsalary
FROM salary
WHERE actualsalary>3000;
-- Query salary table for actual salary between 2000 and 3000
SELECT wid,actualsalary
FROM salary
WHERE actualsalary BETWEEN 2000 AND 3000;
-- Query the number, name and department number of the staff and workers
-- working in "1" or "2" of the Department in the worker table
SELECT  wid,wname,depid
FROM worker
WHERE depid in('1','2');

SELECT  wid,wname,depid
FROM worker
WHERE depid=1 or depid=2;
--  Query for the number, name and gender of all workers with the surname
--  Sun in the worker (employee) table
SELECT wid,wname,wsex
FROM worker
WHERE wname LIKE '孙%';
--
SELECT wid,wname,wsex
FROM worker
WHERE wname NOT LIKE '_华%';
--
SELECT AVG(totalsalary) AS average_wage
FROM salary
WHERE sdate='2014-01-04';
--
SELECT COUNT(*) AS total_workers
FROM worker;
--
SELECT COUNT(DISTINCT wid) AS total_workers
FROM salary;
--
SELECT MIN(actualsalary) AS minimum_wage
FROM salary;
--
SELECT SUM(actualsalary) AS total_wage
FROM salary
WHERE sdate='2011-01-04';
--
SELECT wid,wname,wbirthdate,depid
FROM worker
ORDER BY depid DESC,wbirthdate DESC;
--
SELECT wsex AS sex, COUNT(*) AS total_workers
FROM worker
GROUP BY wsex;
--
SELECT sdate AS date_of_payroll, SUM(totalsalary) AS total_payable_wages
FROM salary
GROUP BY sdate;
--
SELECT wid AS staff_number, SUM(totalsalary) AS total_page
FROM salary
GROUP BY wid
HAVING SUM(totalsalary)>5000;
--
SELECT depid AS department_number, COUNT(*) AS party_member_number
FROM worker
WHERE wparty='是'
GROUP BY depid
HAVING COUNT(*)>=1;
--
SELECT wid,wname,dname
FROM worker x,depart y
WHERE x.depid=y.did
ORDER BY wid DESC;
--
SELECT wid,wname,dname
FROM worker x INNER JOIN depart y
ON x.depid=y.did
ORDER BY wid DESC;
--
SELECT  x.wid AS staff_number ,wname AS full_name,dname AS department_name,actualsalary AS february_wages
FROM worker x,depart y,salary z
where x.depid=y.did AND x.wid=z.wid AND YEAR(sdate)=2011 AND MONTH(sdate)=2
ORDER BY dname DESC;
--
SELECT  x.wid AS staff_number ,wname AS full_name,dname AS department_name,actualsalary AS february_wages
FROM worker x INNER JOIN depart y
ON x.depid=y.did INNER JOIN salary  z ON x.wid=z.wid
AND YEAR(sdate)=2011 and MONTH(sdate)=2
ORDER BY dname DESC;
--
SELECT *
FROM worker LEFT OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT worker.*,study.*
FROM worker RIGHT OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT *
FROM worker FULL OUTER JOIN study
ON worker.wid=study.wid;
--
SELECT *
FROM worker CROSS JOIN study;
--
SELECT dname AS department_name,COUNT(*) AS party_member_number
FROM depart INNER JOIN worker
ON depart.did=worker.depid AND wparty='yes'
GROUP BY dname;
--
SELECT wid as ID,wname as full_name,wsex as sex,wbirthdate as birth_date
FROM worker
WHERE wsex='男'
UNION
SELECT cid,cname,csex,cbirthdate
FROM customer
WHERE csex='男';
--
SELECT wid,sdate,totalsalary,actualsalary
FROM salary
UNION
SELECT '小计',null,SUM(totalsalary),SUM(actualsalary)
FROM salary;
--
WITH result(wid,wname,dname) AS
(
SELECT wid,wname,dname
FROM worker INNER JOIN depart ON worker.depid=depart.did and dname='人事处'
)
SELECT *
FROM result;
-- Transact-SQL object ref (4 part)
SELECT dbo.ACCOUNT.salary
FROM dbo.ACCOUNT;
