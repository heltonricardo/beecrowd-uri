while True:
    try:
        ci = ba = 0
        for g in range(int(input())):
            a, b = [int(x) for x in input().split()]
            ci += a * b
            ba += b
        ba *= 100
        print('{:.4f}'.format(ci / ba))
    except EOFError: break
