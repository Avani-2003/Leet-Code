select emp.name , B.bonus from Employee emp left join Bonus B
on emp.empId=B.empId where B.bonus<1000 or B.bonus is null;