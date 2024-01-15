import sys
input = sys.stdin.readline

n = int(input())
list = []

for _ in range (n):
    command = input().split()
    
    if command[0]=='push':
        list.append(int(command[1]))
        
    elif command[0]=='pop':
        if len(list)==0: print(-1)
        else: print(list.pop(0))
    elif command[0]=='size':
        print(len(list))
    elif command[0]=='empty':
        if len(list)==0: print(1)
        else: print(0)
    elif command[0]=='front':
        if len(list)==0: print(-1)
        else: print(list[0])
    elif command[0]=='back':
        if len(list)==0: print(-1)
        else: print(list[-1])    
