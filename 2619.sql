SELECT prod.name, prov.name, prod.price
FROM products AS prod
INNER JOIN providers AS prov
ON prod.id_providers = prov.id
INNER JOIN categories AS cat
ON prod.id_categories = cat.id
WHERE cat.name = 'Super Luxury' AND prod.price > 1000;