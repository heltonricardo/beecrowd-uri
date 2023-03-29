def imp(n, e):
    print(' ' * (e - len(str(n))), end='')
    print(n, end='')
    return

c = 4
for g in range(int(input())):
    n = int(input())
    v = []
    for i in range(n):
        t = [int(x)**2 for x in str(input()).split()]
        v.append(t)
    if c != 4: print()
    print('Quadrado da matriz #{}:'.format(c))
    c += 1
    esp = []
    for i in range(n):
        m = 0
        for j in range(n):
            if len(str(v[j][i])) > m: m = len(str(v[j][i]))
        esp.append(m)
    for i in range(n):
        for j in range(n):
            imp(v[i][j], esp[j])
            if j != n-1: print(end=' ')
        print()
