SELECT name, ROUND((salary * 0.1), 2) tax
FROM people
WHERE salary > 3000