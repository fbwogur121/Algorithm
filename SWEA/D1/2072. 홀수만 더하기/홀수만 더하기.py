N = int(input())

for i in range(1, N+1):
    res = 0
    arr = list(map(int, input().split()))
    for j in range(10):
        if (arr[j] % 2 == 1):
            res += arr[j]
    print(f"#{i} {res}")
            