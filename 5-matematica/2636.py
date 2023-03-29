while True:
    n = int(input())
    if n == 0: break
    q = 0
    j = 2
    print('{} ='.format(n), end=' ')
    for i in range(j, n):
        if q > 2: break
        if n % i == 0:
            if q == 0 or q == 1: print(i, end=' x ')
            else: print(i)
            q += 1
            j = i+1
