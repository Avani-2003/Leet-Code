select std.student_id , std.student_name , sub.subject_name , 
ifnull(count(exam.student_id),0) as attended_exams
from Students std cross join Subjects sub left join Examinations exam
on std.student_id = exam.student_id and sub.subject_name = exam.subject_name
group by std.student_id , std.student_name , sub.subject_name
order by std.student_id , sub.subject_name;











-- select student_id ,subject_name , count(distinct(subject_name))
-- from Examinations group by student_id;
-- (select * from Students std join Subjects 
-- ) left join 
-- (select count(subject_name)
-- from Examinations group by student_id,subject_name)
-- on std.student_id=Examinations.student_id order by student_id , subject_name;

-- select std.student_id , std.student_name  , sub.subject_name , count(exam.subject_name)
-- from Students std cross join Subjects sub join Examinations exam
-- on exam.student_id = std.student_id
-- group by exam.student_id,exam.subject_name
-- order by std.student_id , sub.subject_name;