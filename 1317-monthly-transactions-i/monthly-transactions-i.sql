select DATE_FORMAT(trans_date, '%Y-%m') as month , 
country , count(state) as trans_count , 
count(CASE WHEN state = 'approved' THEN 1 ELSE NULL END) as  approved_count,
sum(amount) as trans_total_amount,
sum(case when state = 'approved' then amount else 0 end) as approved_total_amount
from Transactions
group by year(trans_date) , month(trans_date) , country;