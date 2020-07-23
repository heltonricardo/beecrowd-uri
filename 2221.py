t = int(input())
for i in range(t):
    b = int(input())
    e = str(input()).split()
    a1 = int(e[0])
    d1 = int(e[1])
    l1 = int(e[2])
    e = str(input()).split()
    a2 = int(e[0])
    d2 = int(e[1])
    l2 = int(e[2])
    d = (a1 + d1) / 2
    g = (a2 + d2) / 2
    d = d + b if (l1 % 2 == 0) else d
    g = g + b if (l2 % 2 == 0) else g
    if d == g: print('Empate')
    elif d > g: print('Dabriel')
    else: print('Guarte')
