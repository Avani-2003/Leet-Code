select t1.machine_id,round(avg(t1.timestamp-t2.timestamp),3) as processing_time
from Activity as t1 join Activity as t2
on t1.machine_id=t2.machine_id and t1.process_id=t2.process_id 
and t1.activity_type<>t2.activity_type and t1.timestamp>t2.timestamp 
group by t1.machine_id;