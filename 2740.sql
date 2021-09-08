SELECT CONCAT('Podium: ', team) "name"
FROM league
WHERE position <= 3
UNION ALL
SELECT CONCAT('Demoted: ', team)
FROM league, (SELECT position FROM league ORDER BY position DESC LIMIT 2) tmp
WHERE tmp.position = league.position