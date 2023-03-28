SELECT prod.name, prov.name, cate.name
FROM products prod
INNER JOIN providers  prov ON prod.id_providers  = prov.id
INNER JOIN categories cate ON prod.id_categories = cate.id
WHERE prov.name = 'Sansul SA' AND cate.name = 'Imported'