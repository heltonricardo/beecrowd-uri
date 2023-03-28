while True:
    n, m = [int(x) for x in input().split()]
    if n == m == 0: break
    c = []
    for p in range(n):
        c.append([y for y in input()])
    a, b = [int(x) for x in input().split()]
    rn = int(a / n)
    rm = int(b / m)
    j = 0
    while j < n:
        q = 0
        while q < rn:
            for k in range(m):
                print(rm * c[j][k], end='')
            print()
            q += 1
        j += 1
    print()
