select project_id,round(sum(experience_years)/count(project_id),2) as average_years
from Project left join Employee 
on Employee.employee_id=Project.employee_id
group by project_id;