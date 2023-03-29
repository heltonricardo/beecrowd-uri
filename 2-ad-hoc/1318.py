while True:
    e = [int(x) for x in str(input()).split()]
    n = e[0]
    m = e[1]
    if n == m == 0: break
    e = str(input()).split()
    r = 0
    for i in range(1, n + 1):
        q = e.count(str(i))
        if q > 1: r += 1
    print(r)
