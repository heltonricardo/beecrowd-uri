while True:
    try: e = str(input()).split()
    except EOFError: break
    v = ''
    for k in e: v += k[0]
    v = v.upper()
    q = 0
    while len(v) > 1:
        if len(v) == 2:
            if v[0] == v[1]:
                q += 1
                break
        i = 1
        while v[0] == v[i] and i < len(v)-1: i += 1
        v = v.replace(v[0], '', i)
        if i > 1: q += 1
    print(q)
