a,b,v = map(int, input().split())

#올라야 할 높이
h = v-b

#하루에 오를 수 있는 높이
k = a-b

if(h%k==0):
    print(h//k)
else:
    print(h//k+1)