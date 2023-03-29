while True:
    try:
        e = str(input()).split()
        n = int(e[0])
        m = int(e[1])
        p = []
        for i in range(n):
            p.append([int(x) for x in str(input()).split()])
        for i in range(n):
            for j in range(m):
                if p[i][j] == 1:
                    ax = i
                    ay = j
                elif p[i][j] == 2:
                    px = i
                    py = j
        print(abs(ax - px) + abs(ay - py))
    except EOFError: break
