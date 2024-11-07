import sys

n = []

for i in range(9):
    tall = int(sys.stdin.readline().strip())
    n.append(tall)


total_sum = sum(n)

found = False

for i in range(9):
    for j in range(i + 1, 9):
        if total_sum - (n[i] + n[j]) == 100:
            del n[j]
            del n[i]
            found = True
            break
    if found:
        break

n.sort()
for height in n:
    print(height)