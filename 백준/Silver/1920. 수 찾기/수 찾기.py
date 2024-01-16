n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
a.sort()

for num in b:
    start, end = 0, n-1
    isExist = False
    
    while start <= end:
        mid = (start+end)//2
        if num == a[mid]:
            isExist = True
            print(1)
            break
        elif num>a[mid]:
            start = mid+1
        else:
            end = mid-1
    if not isExist:
        print(0)