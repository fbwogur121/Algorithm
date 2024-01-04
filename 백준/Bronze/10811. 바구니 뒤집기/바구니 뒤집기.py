n, m = map(int, input().split())
n_list = list(range(1,n+1))
for i in range(m):
    a,b = map(int, input().split())
    n_list[a-1:b] = reversed(n_list[a-1:b])
for j in range(len(n_list)):
    print(n_list[j], end=' ')