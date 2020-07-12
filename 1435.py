def d(n, x, y):
    l = []
    l.append(x + 1)
    l.append(y + 1)
    l.append(n - x)
    l.append(n - y)
    return min(l)

while True:
    n = int(input())
    if n == 0: break
    for  i in range(n):
        for j in range(n):
            print('{:>3}'.format(d(n, i, j)), end='')
            if not j == n - 1: print(' ', end='')
        print()
    print()
