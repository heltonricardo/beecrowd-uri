q = int(input())
for p in range(q):
    m = []
    n = int(input())
    for i in range(n):
        e = [int(x) for x in str(input()).split()]
        m.append(e[1:])
    n = int(input())
    for i in range(n):
        f = [int(x) for x in str(input()).split()]
        if f[0] == 1: z = len(set(m[f[1]-1]) & set(m[f[2]-1]))
        else: z = len(set(m[f[1]-1]) | set(m[f[2]-1]))
        print(z)
