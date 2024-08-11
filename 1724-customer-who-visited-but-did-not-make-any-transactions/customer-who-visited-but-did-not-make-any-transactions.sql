select customer_id , count(customer_id) as count_no_trans from visits 
where visit_id not in (select Visits.visit_id from 
Visits inner join Transactions on Transactions.visit_id = Visits.visit_id) group by customer_id;