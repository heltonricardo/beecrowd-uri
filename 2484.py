while True:
    try:
        e = str(input())
    except EOFError: break
    f = len(e)
    for i in range(len(e)):
        print(' ' * i, end='')
        for j in range(f):
            print(e[j], end='')
            if j != f-1: print(end=' ')
        f -= 1
        print()
    print()
