def ex(m):
    t = len(m[0])
    for i in range(t):
        for j in range(t):
            print(m[i][j], end='')
        print()

while True:
    n = int(input())
    if n == 0: break
    m = []
    for i in range(n):
        m.append(['O' for x in range(n)])
    i = j = int(n / 2) - 1
    d = '>'
    while i != n-1 and j != n-1:
        if d == '>':
            if j < n-1: j += 1
            else: d == '^'
        if d == '^':
            if i > 0: i -= 1
            else: d == '<'
        if d == '<':
            if j > 0: j -= 1
            else: d == 'v'
        if d == 'v':
            if i < n-1: i += 1
            else: d == ''
        m[i][j] = 'X'
        ex(m)
        print('@')





        
