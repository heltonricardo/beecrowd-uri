while True:
    try:
        e = str(input()).lower().split('-')
    except EOFError: break
    p = ''
    for i in e: p += i[0] + i[-1]
    r = True
    for j in 'cobol':
        if r:
            t = p.find(j)
            if t == -1: r = False
            else: p = p[t+2:] if t % 2 == 0 else p[t+1:]
        else: break
    print('GRACE HOPPER' if r else 'BUG')
