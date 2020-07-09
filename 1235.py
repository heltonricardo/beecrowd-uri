n = int(input())
for i in range(n):
    e = str(input())
    t = int(len(e) / 2)
    f = e[:t]
    f = f[::-1]
    g = e[t:]
    g = g[::-1]
    print(f + g)
