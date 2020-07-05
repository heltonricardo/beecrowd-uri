n = int(input())
for g in range(n):
    e = input().split()
    a = int(e[0])
    b = int(e[1])
    ca = float(e[2])
    cb = float(e[3])
    q = 0
    while a <= b:
        a += int(a * ca / 100)
        b += int(b * cb / 100)
        q += 1
        if q == 101: break
    if q <= 100: print(q, 'anos.')
    else: print('Mais de 1 seculo.')
