def t(n, e):
    if e == len(str(n)): return n
    print(end=' ')
    return t(n, e - 1)

while True:
    n = int(input())
    if n == 0: break
    b = 1
    e = len(str(4 ** (n - 1)))
    for i in range(n):
        a = b
        for j in range(n):
            print(t(a, e), end='')
            if j != n - 1: print(' ', end='')
            if j == 1: b = a
            a *= 2
        print()
    print()
