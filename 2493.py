def poss(a, b, c):
    if a + b == c: return True
    if a - b == c: return True
    if a * b == c: return True
    return False

while True:
    try:
        n = int(input())
        v = []
        for i in range(n):
            v.append([int(x) for x in str(input()).replace('=', ' ').split()])
        e = []
        for i in range(n):
            e.append(str(input()).split())
        np = []
        for p in e:
            q = int(p[1]) - 1
            if p[2] == '+':
                if not v[q][0] + v[q][1] == v[q][2]: np.append(p[0])
            elif p[2] == '-':
                if not v[q][0] - v[q][1] == v[q][2]: np.append(p[0])
            elif p[2] == '*':
                if not v[q][0] * v[q][1] == v[q][2]: np.append(p[0])
            elif poss(v[q][0], v[q][1], v[q][2]): np.append(p[0])
        if len(np) == 0: print('You Shall All Pass!')
        elif len(np) == n: print('None Shall Pass!')
        else:
            np.sort()
            for j in np:
                print(j, end='')
                if j != np[-1]: print(' ', end='')
            print()
    except EOFError: break
