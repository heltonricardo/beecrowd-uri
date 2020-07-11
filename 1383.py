def s45(m, x1, y1, x2, y2):
    s = 0
    for i in range(x1, x2 + 1):
        for j in range(y1, y2 + 1):
            s += m[i][j]
    return True if s == 45 else False

q = int(input())
for p in range(1, q + 1):
    m = []
    su = True
    for i in range(9):
        e = [int(x) for x in str(input()).split()]
        m.append(e)

    for i in range(9):
        for j in range(1, 10):
            if m[i].count(j) != 1:
                su = False

    if su:
        t = [[lin[i] for lin in m] for i in range(len(m[0]))]

        for i in range(9):
            for j in range(1, 10):
                if t[i].count(j) != 1:
                    su = False

    if su:
        if not (s45(m, 0, 0, 2, 2) and s45(m, 3, 3, 5, 5) and s45(m, 6, 6, 8, 8) and s45(m, 6, 0, 8, 2) and s45(m, 0, 6, 2, 8) and s45(m, 0, 3, 2, 5) and s45(m, 3, 0, 5, 2) and s45(m, 6, 3, 8, 5) and s45(m, 3, 6, 5, 8)):
            su = False

    print('Instancia', p)
    print('SIM' if su else 'NAO')
    print()
