while True:
    n = int(input())
    if n == 0: break
    s = ['{}'.format(x + 1) for x in range(n)]
    i = 1
    while True:
        l = str(input()).split()
        if s == l: break
        i += 1
    print(i)
