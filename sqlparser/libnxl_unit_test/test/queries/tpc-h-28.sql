-- left JOIN right USING(field1,field2)
SELECT f.color,
       c.is_primary,
       c.is_dark,
       c.is_rainbow
FROM   flags f
       INNER JOIN color c USING(color)
WHERE  f.country = 'China';

-- equals to
/*SELECT f.color,
       c.is_primary,
       c.is_dark,
       c.is_rainbow
FROM   flags f
       INNER JOIN color c ON f.color = c.color
WHERE  f.country = 'China';*/