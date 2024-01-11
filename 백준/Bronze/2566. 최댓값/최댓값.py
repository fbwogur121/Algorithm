import sys
input = sys.stdin.readline

a = []
for _ in range(9):
    a.append(list(map(int, input().split())))

max_list=[]
for i in range(9):
    max_list.append(max(a[i]))
    
# print(max_list)
print(max(max_list))
print(max_list.index(max(max_list))+1, end=' ')

k = max_list.index(max(max_list))

b=a[k]
print(b.index(max(a[k]))+1)