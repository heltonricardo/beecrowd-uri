while True:
    m, n = [int(x) for x in input().split()]
    if m <= 0 or n <= 0: break
    if m > n: m, n = n, m
    for i in range(m, n+1):
        print(i, end=' ')
    s = int(((n + m) * ((n - m) + 1)) / 2)
    print('Sum=' + str(s))
