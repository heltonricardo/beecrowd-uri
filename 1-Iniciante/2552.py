while True:
    try: l, c = [int(x) for x in input().split()]
    except EOFError: break
    m = []
    for i in range(100):
        m.append([7 for j in range(100)])
    for i in range(1, l+1):
        for j in range(1, c+1):
            m[i][j]
    for i in range(1, l+1):
        for j in range(1, c+1):
            if m[i][j] == 1: print(9, end='')
            else:
                s = 0
                if m[i-1][j] == 1: s += 1
                if m[i+1][j] == 1: s += 1
                if m[i][j-1] == 1: s += 1
                if m[i][j+1] == 1: s += 1
                print(s, end='')
        print()
