while True:
    try:
        e = str(input()).split()
        n = e[1]
        s = 0
        for i in range(len(n)):
            s += int(n[i])
        print(s, end = ' ')
        print('sim' if s % 3 == 0 else 'nao')
    except EOFError: break
