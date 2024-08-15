select employee_id , department_id from Employee
where primary_flag='Y' or
employee_id in (select emp.employee_id from Employee emp
group by emp.employee_id having count(emp.employee_id)=1);