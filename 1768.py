while True:
    try:
        n = int(input())
    except EOFError: break
    lim = int(n // 2)
    for i in range(1, n+1, 2):
        print(' ' * lim, end='')
        lim -= 1
        print('*' * i)
    print((int(n // 2) * ' ') + '*')
    print((int(n // 2) - 1) * ' ' + '***')
    print()
