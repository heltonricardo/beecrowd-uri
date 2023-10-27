while True:
    try:
        q = 0
        e = str(input()).split()
        n = int(e[0])
        i = int(e[1])
        for p in range(n):
            e = str(input()).split()
            a = int(e[0])
            b = int(e[1])
            if a == i and b == 0: q += 1
        print(q)
    except EOFError: break
    
