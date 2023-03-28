SELECT mov.id, mov.name
FROM movies mov
INNER JOIN genres gen ON mov.id_genres = gen.id
WHERE gen.description = 'Action';