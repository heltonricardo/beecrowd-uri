def ep(s):
    s = s.upper()
    for j in s:
        if not j in 'QWERTYUIOPASDFGHJKLZXCVBNM': return False
    return True

while True:
    try:
        e = str(input()).split()
    except EOFError: break

    s = q = 0
    for i in e:
        c = True
        if '.' in i:
            if len(i) > 1 and i.count('.') == 1 and i[-1] == '.': i = i.replace('.', '')
            else: c = False
        if not ep(i): c = False
        if c:
            s += len(i)
            q += 1
    r = int(s / q) if q != 0 else 0
    if r <= 3: print(250)
    elif r <= 5: print(500)
    else: print(1000)
