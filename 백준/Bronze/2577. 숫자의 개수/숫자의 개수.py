a = int(input())
b = int(input())
c = int(input())

t = str(a*b*c)

for i in range(10):
    k=0
    for j in range(len(t)):
        if i == int(t[j]):
            k +=1
    print(k)