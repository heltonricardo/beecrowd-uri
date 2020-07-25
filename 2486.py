while True:
    n = int(input())
    if n == 0: break
    s = 0
    for i in range(n):
        e = str(input()).split()
        q = int(e[0])
        o = e[1]
        v = 0
        if o == 'suco': v = 120
        elif o == 'morango': v = 85
        elif o == 'mamao': v = 85
        elif o == 'goiaba': v = 70
        elif o == 'manga': v = 56
        elif o == 'laranja': v = 50
        elif o == 'brocolis': v = 34
        s += (q * v)
    if s > 130: print('Menos {} mg'.format(s - 130))
    elif s < 110: print('Mais {} mg'.format(110 - s))
    else: print('{} mg'.format(s))
