for g in range(int(input())):
    e = str(input()).replace('.', '')
    q = 0
    while '<>' in e:
        e = e.replace('<>', '', 1)
        q += 1
    print(q)
