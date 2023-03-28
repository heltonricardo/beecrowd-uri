while True:
    n, m = [int(x) for x in str(input()).split()]
    if n == 0 == m: break
    print(str(n + m).replace('0',''))
