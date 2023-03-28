SELECT TRUNC((SUM(price)/COUNT(price)), 2) AS price
FROM products;