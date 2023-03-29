i = 0
while True:
    n = int(input())
    if n == 0: break
    v = []
    t = 0
    if i != 0: print()
    i += 1
    for i in range(n):
        v.append(str(input()))
        if len(v[i]) > t: t = len(v[i])
    for j in v:
        s = 0
        while s + len(j) < t:
            print(end=' ')
            s += 1
        print(j)
