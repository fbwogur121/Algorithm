from collections import deque

n = int(input())
d = deque()
for i in range(1,n+1): d.append(i)

for i in range(n-1):
    d.popleft()
    d.append(d[0])
    d.popleft()
print(d[0])