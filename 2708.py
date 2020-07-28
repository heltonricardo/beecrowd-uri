q = s = 0
while True:
    e = str(input()).split()
    if e[0] == 'ABEND': break
    c = e[0]
    n = int(e[1])
    if c == 'SALIDA':
        s += 1
        q += n
    else:
        s -= 1
        q -= n
print(q)
print(s)
