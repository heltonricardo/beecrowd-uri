while True:
    try:
        e = str(input()).strip()
        c = e.replace('.', '').replace('-', '')
        s = 0
        for i in range(9):
            s += int(c[i]) * (i + 1)
        b1 = s % 11
        b1 = 0 if b1 == 10 else b1

        s = 0
        if b1 == int(e[-2]):
            for i in range(9):
                s += int(c[i]) * (9 - i)
            b2 = s % 11
            b2 = 0 if b2 == 10 else b2
            if b2 == int(e[-1]):
                print('CPF valido')
            else: print('CPF invalido')
        else: print('CPF invalido')
    except EOFError: break
