while True:
    n = int(input())
    if n == 0: break
    for i in range(n):
        e = [int(x) for x in str(input()).split()]
        c = []
        for j in e:
            if j <= 127: c.append(0)
            else: c.append(255)
        if c.count(0) == 1:
            if c[0] == 0: print('A')
            elif c[1] == 0: print('B')
            elif c[2] == 0: print('C')
            elif c[3] == 0: print('D')
            elif c[4] == 0: print('E')
        else: print('*')
