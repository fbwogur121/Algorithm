import sys
input = sys.stdin.readline

n, m = map(int, input().split())

arr = []
res = []

for i in range(n):
    arr.append(input())
    
for a in range(n-7):
    for b in range(m-7):
        w_start = 0
        b_start = 0
        for i in range(a, a+8):
            for j in range(b, b+8):
                if (i+j) % 2 == 0:
                    if arr[i][j] != 'W':
                        w_start += 1
                    else:
                        b_start += 1
                else:
                    if arr[i][j] != 'W':
                        b_start += 1
                    else:
                        w_start += 1
        res.append(w_start)
        res.append(b_start)
print(min(res))