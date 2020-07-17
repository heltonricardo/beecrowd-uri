while True:
    try:
        e = str(input()).strip().strip()
        s = 0
        for i in range(9):
            s += int(e[i]) * (i + 1)
        b1 = s % 11
        b1 = 0 if b1 == 10 else b1

        s = 0
        for i in range(9):
            s += int(e[i]) * (9 - i)
        b2 = s % 11
        b2 = 0 if b2 == 10 else b2

        print('{}{}{}.{}{}{}.{}{}{}-{}{}'.format(e[0], e[1], e[2], e[3], e[4], e[5], e[6], e[7], e[8], b1, b2))
        
    except EOFError: break
