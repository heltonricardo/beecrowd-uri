n = int(input())
a, b = 0, 1
for c in range(n):
    if c != n-1: print(a, end=' ')
    else: print(a)
    a, b = b, a+b
