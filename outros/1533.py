while True:
    n = int(input())
    if n == 0: break
    e = [int(x) for x in str(input()).split()]
    f = sorted(e)
    s = f[len(f) - 2]
    for i in range(len(e)):
        if s == e[i]:
            a = i + 1
    print(a)
