SELECT prod.id, prod.name
FROM products prod
INNER JOIN categories cat ON prod.id_categories = cat.id
WHERE cat.name LIKE 'super%';