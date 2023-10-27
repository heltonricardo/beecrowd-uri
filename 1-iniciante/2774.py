while True:
    try:
        input()
        v = [float(x) for x in input().split()]
    except EOFError: break
    qt = len(v)
    m = sum(v) / qt
    s = 0
    for i in v: s += (i - m) ** 2
    o = (s / (qt - 1)) ** 0.5
    print('{:.5f}'.format(o))
