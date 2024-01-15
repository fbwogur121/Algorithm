import sys
input = sys.stdin.readline

list=[]

n = int(input())

for _ in range(n):
    k = input().split()
    a = k[0]
    if a=='push_front':
        list.insert(0,k[1])
    elif a=='push_back':
        list.append(k[1])
    elif a=='pop_front':
        if len(list)==0: print(-1)
        else: 
            print(list[0])
            del list[0]
    elif a=='pop_back':
        if len(list)==0: print(-1)
        else: print(list.pop())
    elif a=='size':
        print(len(list))
    elif a=='empty':
        if len(list)==0: print(1)
        else: print(0)
    elif a=='front':
        if len(list)==0: print(-1)
        else: print(list[0])
    elif a=='back':
        if len(list)==0: print(-1)
        else: print(list[-1])