n = 7
for i in range(1, 10, 2):
    for j in range(n, n-3, -1):
        print('I={} J={}'.format(i, j))
    n += 2
