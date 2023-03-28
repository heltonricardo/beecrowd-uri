while True:
    try:
        e = str(input()).split()
        q = int(e[0])
        mi = int(e[1])
        ma = int(e[2])
        p = 0
        for i in range(q):
            n = int(input())
            if mi <= n <= ma: p += 1
        print(p)
    except EOFError: break
