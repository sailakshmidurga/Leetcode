# Write your MySQL query statement below
Select curr.id
from weather Curr
inner join weather pre
on curr.recordDate = date_add(pre.recordDate, interval 1 day)
and curr.temperature > pre.temperature;