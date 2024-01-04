a = input()
if len(a) % 2 == 1:
    middle_index = len(a) // 2
    a = a[:middle_index] + a[middle_index + 1:]
k=1
for i in range(len(a)//2):
    if(a[i] != a[-(i+1)]):
        k = 0
print(k)