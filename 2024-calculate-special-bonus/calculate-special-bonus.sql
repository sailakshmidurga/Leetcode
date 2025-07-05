# Write your MySQL query statement below
SELECT employee_id,
CASE
WHEN MOD(employee_id,2)=0 OR LEFT(name,1)='M' THEN 0
    ELSE salary
    END AS bonus
FROM Employees
ORDER BY employee_id;