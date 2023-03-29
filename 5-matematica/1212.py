while True:
    e = str(input()).split()
    a = e[0]
    b = e[1]
    if a == '0' == b: break
    n = len(a) if len(a) > len(b) else len(b)
    a = a.zfill(n)
    b = b.zfill(n)
    q = 0
    c = 0
    for i in range(1, n+1):
        if int(a[-i]) + int(b[-i]) + c > 9:
            q += 1
            c = 1
        else: c = 0
    if q == 0: print('No carry operation.')
    elif q == 1: print('1 carry operation.')
    else: print(q, 'carry operations.')
