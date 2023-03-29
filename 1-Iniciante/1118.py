c = 3
while c != 2:
    q = 0
    s = 0.0
    while q < 2:
        n = float(input())
        if not 0 <= n <= 10: print('nota invalida')
        else:
            s += n
            q += 1
    print('media = {:.2f}'.format(s / 2))

    while True:
        print('novo calculo (1-sim 2-nao)')
        c = int(input())
        if c == 1 or c == 2: break
