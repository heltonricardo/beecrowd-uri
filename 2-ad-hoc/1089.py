while True:
    n = int(input())
    if n == 0: break
    v = [int(x) for x in input().split()]
    a = True if v[-1] < v[0] else False
    p = 0
    for i in range(1, n):
        if v[i-1] < v[i]: s = True
        else: s = False
        if s != a: p += 1
        a = s
    if v[-1] < v[0]: s = True
    else: s = False
    if s != a: p += 1
    print(p)
