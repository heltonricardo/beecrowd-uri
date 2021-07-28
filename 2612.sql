SELECT mov.id, mov.name
FROM movies mov
INNER JOIN genres gen        ON mov.id_genres = gen.id
INNER JOIN movies_actors moa ON mov.id = moa.id_movies
INNER JOIN actors act        ON moa.id_actors = act.id
WHERE (act.name = 'Marcelo Silva' OR act.name = 'Miguel Silva')
AND gen.description = 'Action';