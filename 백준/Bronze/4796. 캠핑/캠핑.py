import sys
input = sys.stdin.readline

case = 1

while(1):
    sum = 0
    L, P, V = map(int, input().split())
    if(L==0 and P==0 and V==0):
        break
    else:
        t = V//P
        sum += t*L
        remain = V%P
        sum += min(remain, L)
        
        print(('Case %d: %d'%(case, sum)))
    case += 1