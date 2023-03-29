def som(n):
    if len(n) == 1: return n
    s = 0
    for i in range(len(n)):
        s += int(n[i])
    return som(str(s))


while True:
    e = str(input()).split()
    a = e[0]
    b = e[1]
    if a == b == '0': break
    ta = som(a)
    tb = som(b)
    if ta > tb: print(1)
    elif ta < tb: print(2)
    else: print(0)
