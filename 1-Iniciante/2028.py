k = 1
while True:
    try: n = int(input())
    except EOFError: break
    s = 1
    for i in range(1, n+1): s += i
    print('Caso {}:'.format(k), s, end=' ')
    k += 1
    if s != 1: print('numeros')
    else: print('numero')
    print(0, end='')
    for i in range(n+1):
        for j in range(1, i+1):
            print('', i, end='')
    print()
    print()
