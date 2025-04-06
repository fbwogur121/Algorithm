import sys
tmp = sys.stdin.readline().split()
for i in range(1, len(tmp)):
    res = ''
    alpahbet = ''
    for j in tmp[i]:
        if j.isalpha(): alpahbet += j
        if j == "*" or j == '&': res += j 
        elif j == '[': res += ']'
        elif j == ']': res += '['
    
    print(tmp[0] + res[::-1], alpahbet+';')