x = int(input())
line=0
point=0

for i in range(10000):
    x -= i
    if x<=0:
        line = i
        point = abs(x)+1
        break

if line%2==1: #홀수
    print(point,'/',line+1-point,sep='')     
else:
    print(line+1-point,'/',point,sep='')
    