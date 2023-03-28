SELECT mode()
WITHIN GROUP (ORDER BY amount) AS most_frequent_value
FROM value_table;