import sys
input = sys.stdin.readline

result = 0

n = int(input())
dp = [[0 for _ in range(10)] for j in range(101)]

for i in range(1, 10):
    dp[1][i] = 1
    
for i in range(2, 101):
    for j in range(10):
        if( j == 0 ):
            dp[i][j] = dp[i-1][j+1]
        elif( j == 9 ):
            dp[i][j] = dp[i-1][j-1]
        else:
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]

for i in range(10):
    result += dp[n][i]
    
print(result % 1000000000)