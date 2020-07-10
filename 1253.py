def cz(c, n):
    v = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    return v[v.find(c) - n]

q = int(input())
for p in range(q):
    e = str(input())
    n = int(input())
    for c in e:
        print(cz(c, n), end='')
    print()
