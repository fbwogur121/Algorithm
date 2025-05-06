for i in range(10):
    res = 0
    N = int(input())
    building = list(map(int, input().split()))
    for j in range(2, N-2):
        maxBuilding = max(building[j-2], building[j-1], building[j+1], building[j+2])
        if maxBuilding<building[j]:
            res += (building[j]-maxBuilding)
    print(f"#{i+1} {res}")