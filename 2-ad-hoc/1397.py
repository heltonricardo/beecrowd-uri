while True:
    try:
        n = int(input())
        if n == 0: break
        j1 = j2 = 0
        for i in range(n):
            e = str(input()).split()
            a = int(e[0])
            b = int(e[1])
            if a > b: j1 += 1
            elif b > a: j2 += 1
        print(j1, j2)
    except EOFError:
        break
