n = int(input())

square = [[0]*100 for _ in range(100)]


for _ in range(n):
    a, b = map(int, input().split())
    for i in range(a, a+10):
        for j in range(b, b+10):
            square[i][j] = 1
            
tot_sum = sum(sum(row) for row in square)
print(tot_sum)