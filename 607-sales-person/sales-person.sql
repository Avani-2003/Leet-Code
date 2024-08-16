-- select * from SalesPerson per left join Orders ord
-- on per.sales_id = ord.sales_id where ord.com_id not in
-- (select com_id from Company where name = 'RED');
select per.name from SalesPerson per
where per.sales_id not in
(select ord.sales_id from Orders ord join Company com
on ord.com_id = com.com_id
where com.name='RED');