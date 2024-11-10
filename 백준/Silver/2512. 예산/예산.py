import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
m = int(input())

arr.sort()

if sum(arr) <= m:
    print(max(arr))
 
else:
    low, high = 0, max(arr)
    res = 0
    
    while low <= high:
        mid = (low+high) // 2
        total = 0
        
        for request in arr:
            total += min(request, mid)
            
        if total > m:
            high = mid-1
        else:
            result = mid
            low = mid+1
    print(result)