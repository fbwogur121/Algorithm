import sys

input = sys.stdin.readline

n, m = map(int, input().split())
array = list(map(int, input().split()))

sum = 0

i = 0
max = 0
sum = 0

for i in range(m):
    sum = sum + array[i]

max = sum

i = m
s = 0
while i < n:
    sum = sum - array[s]
    sum = sum + array[i]
    i = i + 1
    s = s + 1
    if max < sum:
        max = sum

print(max)