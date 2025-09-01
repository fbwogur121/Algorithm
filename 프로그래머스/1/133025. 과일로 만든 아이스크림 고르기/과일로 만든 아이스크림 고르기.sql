-- 코드를 입력하세요
SELECT ii.FLAVOR
from FIRST_HALF fh
join ICECREAM_INFO ii
on fh.flavor = ii.flavor
where fh.total_order > 3000
and ii.ingredient_type='fruit_based'
order by fh.total_order desc;