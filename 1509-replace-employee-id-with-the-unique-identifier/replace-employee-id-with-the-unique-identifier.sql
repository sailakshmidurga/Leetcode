/* Write your PL/SQL query statement below */
SELECT i.unique_id,e.name
FROM
employees e LEFT  JOIN employeeuni i ON  e.id = i.id;