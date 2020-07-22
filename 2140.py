while True:
    a, b = [int(x) for x in input().split()]
    if a == b == 0: break
    v = b - a
    y = 0
    x = int(v // 100)
    v -= x * 100
    y += x
    x = int(v // 50)
    v -= x * 50
    y += x
    x = int(v // 20)
    v -= x * 20
    y += x
    x = int(v // 10)
    v -= x * 10
    y += x
    x = int(v // 5)
    v -= x * 5
    y += x
    x = int(v // 2)
    v -= x * 2
    y += x

    if y == 2 and v == 0: print('possible')
    else: print('impossible')
