while True:
    e = str(input()).split()
    n = int(e[0])
    k = int(e[1])
    if n == k == 0: break
    e = [int(x) for x in str(input()).split()]
    p = 0
    for i in range(1, 101):
        if e.count(i) >= k:
            p += 1
    print(p)
