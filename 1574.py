q = int(input())
for p in range(q):
    s = int(input())
    v = []
    for r in range(s):
        e = str(input()).split()
        if e[0] == 'LEFT': v.append(-1)
        elif e[0] == 'RIGHT': v.append(1)
        else: v.append(v[int(e[2]) - 1])
    print(sum(v))
