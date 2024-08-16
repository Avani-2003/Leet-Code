select p1.product_name , sum(ord.unit) as unit from Products p1 join Orders ord
on p1.product_id = ord.product_id where ord.order_date like '2020-02-%'
group by ord.product_id having sum(ord.unit)>=100;