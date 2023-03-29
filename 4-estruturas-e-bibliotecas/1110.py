while True:
    n = int(input())
    if n == 0: break
    v = [x for x in range(1, n+1)]
    print('Discarded cards:', end=' ')
    while len(v) > 1:
        print(v[0], end='')
        del v[0]
        v.append(v[0])
        del v[0]
        if len(v) > 1: print(end=', ')
    print()
    print('Remaining card:', v[0])
