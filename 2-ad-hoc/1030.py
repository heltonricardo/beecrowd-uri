for g in range(int(input())):
    n, k = [int(x) for x in input().split()]
    v = [1 for x in range(1, n+1)]
    m = 0
    i = p = 1
    while (m < n-1):
        if v[i] == 1: p += 1
        if p == k:
            v[i] = 0
            m += 1
            p = 0
        i += 1
        if i == n: i = 0
    i = 0
    while v[i] == 0: i += 1
    print('Case {}: {}'.format(g+1, i+1))
