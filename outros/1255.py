for g in range(int(input())):
    e = input().lower()
    t = []
    for i in range(97, 123):
        t.append(e.count(chr(i)))
    m = max(t)
    for c, j in enumerate(t):
        if j == m: print(chr(c+97), end='')
    print()
