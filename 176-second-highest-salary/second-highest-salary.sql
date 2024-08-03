SELECT MAX(salary) AS SecondHighestSalary FROM Employee E1 WHERE salary <> 
(SELECT MAX(salary) FROM Employee E2);