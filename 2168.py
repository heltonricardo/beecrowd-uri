m = []
n = int(input())
for i in range(n + 1):
    m.append([int(x) for x in str(input()).split()])
for i in range(n):
    for j in range(n):
        s = str(m[i][j]) + str(m[i+1][j]) + str(m[i][j+1]) + str(m[i+1][j+1])
        if s.count('1') > 1: print('S', end='')
        else: print('U', end='')
    print()
