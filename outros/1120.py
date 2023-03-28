while True:
    d, n = str(input()).split()
    if d == '0' == n: break
    n = n.replace(d, '')
    if n == '': n = '0'
    print(int(n))
