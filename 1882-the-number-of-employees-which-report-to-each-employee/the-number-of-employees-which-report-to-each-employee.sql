select emp2.employee_id , emp2.name , count(emp2.employee_id) as reports_count , 
round(avg(emp.age),0) as average_age
-- select *
from Employees emp  join Employees emp2
on emp.reports_to = emp2.employee_id
-- where employee_id in (select reports_to from Employees)
group by emp.reports_to
order by employee_id;
-- having employee_id in (select reports_to from Employees);