SELECT cust.name, rent.rentals_date
FROM customers cust
INNER JOIN rentals rent
ON cust.id = rent.id_customers
WHERE EXTRACT(MONTH FROM rent.rentals_date) = 9
AND EXTRACT(YEAR FROM rent.rentals_date) = 2016;