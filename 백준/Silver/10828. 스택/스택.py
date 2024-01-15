import sys
input = sys.stdin.readline

n = int(input())

list = []

for i in range(n):
    command_list = input().split()

    if command_list[0] == 'push':
        list.append(command_list[1])
    elif command_list[0] == 'pop':
        if(len(list)==0): print(-1)
        else: print(list.pop())
    elif command_list[0] == 'size':
        print(len(list))
    elif command_list[0] == 'empty':
        if len(list)==0: print(1)
        else: print(0)
    elif command_list[0] == 'top':
        if len(list) ==0: print(-1)
        else: print(list[-1])