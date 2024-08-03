SELECT name AS Employee FROM Employee E1 WHERE salary > 
(SELECT salary FROM Employee E2 WHERE E1.managerId=E2.id);