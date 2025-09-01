-- 코드를 입력하세요
SELECT 
ugb.TITLE,
ugb.BOARD_ID, 
ugr.REPLY_ID, 
ugr.WRITER_ID, 
ugr.CONTENTS, 
DATE_FORMAT(ugr.CREATED_DATE, '%Y-%m-%d') as CREATED_DATE
from used_goods_board ugb
join used_goods_reply ugr
on ugb.board_id = ugr.board_id
where ugb.created_date like '2022-10%'
order by ugr.created_date, ugb.title;