c = 1
while True:
    try:
        n = int(input())
        e = str(input()).split()
        for i in range(0, len(e), 2):
            if e[i] != str(n):
                e[i] = '*'
                e[i + 1] = '*'
        if c != 1: print()
        print('Caso {}:'.format(c))
        print('Pares Iguais:', e.count(str(n)))
        print('F:', e.count('F'))
        print('M:', e.count('M'))
        c += 1
    except EOFError:
        break
