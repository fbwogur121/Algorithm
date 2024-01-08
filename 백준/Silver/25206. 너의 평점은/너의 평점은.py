sum = 0
total_sum = 0
score_list = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0]
grade_list = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"]


for i in range(20):
    a = list(map(str, input().split()))
    b = float(a[1])
    if a[2] == 'P':
        continue
    else:
        idx = grade_list.index(a[2])
        score = score_list[idx]
        sum += b
        score_tot = score*b
        total_sum += score_tot
    
print(float(total_sum/sum))