while True:
    try:
        n = int(str(input()).split()[0])
        e = [int(x) for x in str(input()).split()]
        v = []
        for i in range(1, n+1):
            if not i in e: v.append(i)
        if len(v) == 0: print('*')
        else:
            for j in v:
                print(j, end=' ')
            print()
    except EOFError: break
