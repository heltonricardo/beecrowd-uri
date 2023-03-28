SELECT SUBSTR(cpf, 1, 3) || '.' || SUBSTR(cpf, 4, 3) || '.' || SUBSTR(cpf, 7, 3) || '-' || SUBSTR(cpf, 10)
FROM natural_person;