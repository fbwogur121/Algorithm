import sys
input = sys.stdin.readline

def bin_search(l, r, t):
    while l <= r:
        m = (l + r) // 2
        if(lst[m] == t):
            return 1
        if lst[m] > t:
            r = m - 1
        else:
            l = m + 1
    return 0
        

for _ in range(int(input().rstrip())):
    n = int(input().rstrip())
    lst = sorted(list(map(int, input().split())))
    case = 0
    l, r = 0, n-1
    
    for i in range(n-1):
        for j in range(i+1, n):
            dist = abs(lst[j] - lst[i])
            if bin_search(l, r, lst[j]+dist):
                case += 1
                
    print(case)