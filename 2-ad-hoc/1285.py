def con(m):
    n = str(m)
    for i in n:
        if n.count(i) != 1: return False
    return True

while True:
    try:
        e = str(input()).split()
        a = int(e[0])
        b = int(e[1])
        q = 0
        for i in range(a, b+1):
            if con(i): q += 1
        print(q)
    except EOFError: break
