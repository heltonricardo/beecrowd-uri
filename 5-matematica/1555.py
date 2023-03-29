q = int(input())
for p in range(q):
    e = str(input()).split()
    x = int(e[0])
    y = int(e[1])
    r = ((3 * x) ** 2) + (y ** 2)
    b = 2 * (x ** 2) + ((5 * y) ** 2)
    c = -100 * x + (y ** 3)
    if r > b:
        if r > c: print('Rafael ganhou')
        else: print('Carlos ganhou')
    else:
        if b > c: print('Beto ganhou')
        else: print('Carlos ganhou')
