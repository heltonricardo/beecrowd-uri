while True:
    try:
        e = str(input()).split()
        a = int(e[0])
        b = int(e[1])
        c = int(e[2])
        if a == b == c: print('*')
        elif b == c != a: print('A')
        elif a == c != b: print('B')
        else: print('C')
    except EOFError:
        break
