while True:
    try:
        n = int(input())
        v = []
        q = 0
        for i in range(n):
            t = []
            p = []
            e = str(input()).split()
            t.append(int(e[0]))
            p.append(int(e[0]))
            t.append(e[1])
            if e[1] == 'E': p.append('D')
            else: p.append('E')
            if p in v:
                v.remove(p)
                q += 1
            else: v.append(t)
        print(q)
    except EOFError: break
