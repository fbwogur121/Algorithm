n = int(input())
arr = []
for i in range(n):
    a = list(map(int, input().split()))
    arr.append(a)
res=[]
for j in range(n):
    pit = 0
    for k in range(n):
        if(arr[j][0]<arr[k][0] and arr[j][1]<arr[k][1]):
            pit += 1
    res.append(pit+1)
print(*res)