import sys
input = sys.stdin.readline

n = int(input())
array = []


for _ in range(n):
    k = int(input())
    if(k==0):
        array.pop()
    else:
        array.append(k)
        
print(sum(array))