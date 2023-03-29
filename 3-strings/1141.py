while True:
    n = int(input())
    if n == 0: break
    q = 0
    e = input()
    for i in range(n-1):
        f = input()
        if e.startswith(f) or e.endswith(f) or f.startswith(e) or f.endswith(e):
            q += 1
        elif e in f or f in e:
            q += 2
        e = f
    print(q)
