SELECT lf.name, ROUND(lf.omega * 1.618, 3) "Factor N"
FROM life_registry lf
INNER JOIN dimensions d
ON lf.dimensions_id = d.id
WHERE lf.name LIKE 'Richard%' AND (d.name = 'C875' OR d.name = 'C774')
ORDER BY lf.omega