from sys import stdin
for line in stdin:
    x, y, n = [int(x) for x in line.split()]
    for i in range(n):
        a, b = [int(x) for x in str(input()).split()]
        if (a <= x and b <= y) or (a <= y and b <= x): print('Sim')
        else: print('Nao')
