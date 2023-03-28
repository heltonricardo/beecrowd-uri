SELECT cus.id, cus.name
FROM customers cus
FULL OUTER JOIN locations loc ON loc.id_customers = cus.id
WHERE loc.locations_date IS NULL
ORDER BY cus.id;