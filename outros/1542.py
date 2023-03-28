while True:
    e = [int(x) for x in str(input()).split()]
    if e[0] == 0: break
    q = e[0]
    d = e[1]
    p = e[2]
    n = int((q * d * p) / (p - q))
    if n == 1: print('1 pagina')
    else: print('{} paginas'.format(n))
