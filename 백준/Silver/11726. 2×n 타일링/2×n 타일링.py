def A(n,k):
    up=1
    down=1 
    for i in range(k):
        up *= (n-i)
        down *= (k-i)
    
    return((up//down)%10007)

import sys
input = sys.stdin.readline

n = int(input())
sum = 0

for i in range(int(n/2) + 1):
    sum += A(n-i, i)
print(sum%10007)