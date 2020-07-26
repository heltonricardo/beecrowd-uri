while True:
    try:
        n = int(input())
        v = 0.0
        for i in range(n):
            e = str(input()).split()
            t = int(e[0])
            d = int(e[1])
            if float(d / t) > v:
                v = float(d / t)
                print(i+1)
    except EOFError: break
