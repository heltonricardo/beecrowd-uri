SELECT name,
  CASE
  WHEN type='A' then 20.0
  WHEN type='B' then 70.0
  WHEN type='C' then 530.5
  END AS price
FROM products p
ORDER BY type ASC, id DESC