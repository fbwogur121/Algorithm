import sys

n = int(sys.stdin.readline())
dic = {}

for i in range(n):
    command = sys.stdin.readline()
    
    if command not in dic:
        dic[command] = 1
    else:
        dic[command] += 1

list =[]

num = max(dic.values())

for i in dic:
    if num == dic[i]:
        list.append(i)
        
list.sort()
print(list[0])