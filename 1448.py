def pd(f, a, b):
    for i in range(len(f)):
        if f[i] == a[i] and f[i] != b[i]: return 1
        elif f[i] != a[i] and f[i] == b[i]: return 2
    return 0

for i in range(int(input())):
    f = input()
    a = input()
    b = input()
    pa = 0
    pb = 0
    for j in range(len(f)):
        if f[j] == a[j]: pa += 1
        if f[j] == b[j]: pb += 1
    print('Instancia', i+1)
    if pa > pb: print('time 1')
    elif pa < pb: print('time 2')
    else:
        s = pd(f, a, b)
        if s == 1: print('time 1')
        elif s == 2: print('time 2')
        else: print('empate')
    print()
