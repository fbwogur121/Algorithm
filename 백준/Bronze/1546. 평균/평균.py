n = int(input())
score_list = list(map(int, input().split()))
m = max(score_list)
print((sum(score_list))/m*100/n)