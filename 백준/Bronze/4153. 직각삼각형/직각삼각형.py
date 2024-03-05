while (1):
    a, b, c = map(int, input().split())
    if a==0 and b==0 and c==0:
        break
    elif max(a,b,c)*max(a,b,c) == a*a+b*b+c*c-max(a,b,c)*max(a,b,c):
        print("right") 
    else: print("wrong")  