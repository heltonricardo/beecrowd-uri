SELECT pro.name, cat.name
FROM products pro
INNER JOIN categories cat ON pro.id_categories = cat.id
WHERE pro.amount > 100 AND cat.id IN (1, 2, 3, 6, 9)
ORDER BY cat.id;