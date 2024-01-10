import sys
input = sys.stdin.readline

list = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

a = input()

for i in list:
    a = a.replace(i,'*')

print(len(a)-1)