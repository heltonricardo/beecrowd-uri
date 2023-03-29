q = int(input())
for p in range(q):
    e = str(input())
    d1 = int(e[0])
    d2 = int(e[2])
    if d1 == d2: print(d1 * d2)
    elif e[1].isupper(): print(d2 - d1)
    else: print(d1 + d2)
