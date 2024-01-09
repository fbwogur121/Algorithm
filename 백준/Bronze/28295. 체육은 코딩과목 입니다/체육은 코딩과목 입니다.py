import sys
input = sys.stdin.readline
list = ['N', 'E', 'S', 'W']

sum = 0
for _ in range(10):
    sum += int(input())
    
print(list[sum%4])