SELECT mov.id, mov.name
FROM movies mov
INNER JOIN prices pri ON mov.id_prices = pri.id
WHERE pri.value < 2;