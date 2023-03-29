for g in range(int(input())):
    n, k = [int(x) for x in input().split()]
    p = []
    for q in range(n):
        e = [int(x) for x in input().split()]
        p.append({'i':e[0], 'v':e[1]*e[2]*e[3]})
    ne = sorted(p, key=lambda k: (-k['v'], k['i']))
    q = 0
    c = []
    while q < k:
        c.append(ne[q]['i'])
        q += 1
    q = 0
    c.sort()
    for z in c:
        print(z, end='')
        q += 1
        if q != k: print(end=' ')
        else:
            print()
            break
        
