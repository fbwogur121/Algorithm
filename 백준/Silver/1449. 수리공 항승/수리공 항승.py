import sys

n, l = sys.stdin.readline().split()
n = int(n)
l = int(l)

arr = list(map(int, input().split()))
arr.sort()

tape = 1
start = arr[0]

for location in arr[1:]:
    if location in range(start, start+l):
        continue
    else:
        start = location
        tape +=1
print(tape)