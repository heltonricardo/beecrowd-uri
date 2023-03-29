w = False
while True:
    n = int(input())
    if n == 0: break
    if w : print()
    w = True
    v, l = [], []
    for i in range(n):
        e = input().strip()
        while '  ' in e: e = e.replace('  ', ' ')
        v.append(e)
        l.append(len(e))
    t = max(l)
    for j in v:
        print((t - len(j)) * ' ', end='')
        print(j)
