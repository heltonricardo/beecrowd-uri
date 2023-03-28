while True:
    try:
        n = int(input())
        v = []
        for i in range(n):
            t = []
            e = str(input()).split()
            v.append([e[0], int(e[1])])
        v.sort(key=lambda x: x[1])
        for e in v:
            print(e[0], end='')
            if e != v[-1]: print(end=' ')
        print()
    except EOFError: break
