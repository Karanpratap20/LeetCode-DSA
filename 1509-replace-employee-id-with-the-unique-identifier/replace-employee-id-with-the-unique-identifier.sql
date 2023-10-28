# Write your MySQL query statement below
select 
    case 
        when EmployeeUNI.unique_id is null then null 
        else EmployeeUNI.unique_id 
    end as unique_id,
    Employees.name
from Employees
left join EmployeeUNI on EmployeeUNI.id = Employees.id; 