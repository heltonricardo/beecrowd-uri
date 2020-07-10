while True:
    e = str(input()).split()
    s = int(e[0])
    t = int(e[1])
    if s == t == 0: break

    m = []
    for i in range(t):
        m.append([int(x) for x in str(input()).split()])

    o = [[lin[j] for lin in m] for j in range(len(m[0]))]

    ok = False
    for i in range(s):
        if o[i].count(0) == 0: ok = True
    print('yes' if ok else 'no')
    
