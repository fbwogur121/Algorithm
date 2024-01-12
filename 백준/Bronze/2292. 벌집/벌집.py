N = int(input())
n=1
k=1
while 1:
    if N==1: 
        print(1)
        break
    k += 6*(n-1)
    if k>=N:
        print(n)
        break
    n += 1