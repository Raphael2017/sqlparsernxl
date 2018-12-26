-- RECURSIVE CTE
WITH DirectReports(Name, Title, EmployeeID, EmployeeLevel, Sort)
AS (SELECT CONVERT( c.FirstName + ' ' + c.LastName),
        e.Title,
        e.EmployeeID,
        1,
        CONVERT( c.FirstName + ' ' + c.LastName)
    FROM HumanResourcesEmployee AS e
    JOIN PersonContact AS c ON e.ContactID = c.ContactID
    WHERE e.ManagerID IS NULL
    UNION ALL
    SELECT CONVERT( REPLICATE ('| ' , EmployeeLevel) +
        c.FirstName + ' ' + c.LastName),
        e.Title,
        e.EmployeeID,
        EmployeeLevel + 1,
        CONVERT (RTRIM(Sort) + '| ' + FirstName + ' ' +
                 LastName)
    FROM HumanResourcesEmployee as e
    JOIN PersonContact AS c ON e.ContactID = c.ContactID
    JOIN DirectReports AS d ON e.ManagerID = d.EmployeeID
    )
SELECT EmployeeID, Name, Title, EmployeeLevel
FROM DirectReports
ORDER BY Sort;