SELECT cus.name, ord.id
FROM customers cus
INNER JOIN orders ord ON cus.id = ord.id_customers
WHERE '2016-01-01' <= orders_date AND orders_date <= '2016-06-30';