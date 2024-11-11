import sys
input = sys.stdin.readline

arr = []

arr.append(0)
arr.append(1)

n = int(input())

for i in range(n):
    idx = arr[i]+arr[i+1]
    arr.append(idx)
print(arr[n])