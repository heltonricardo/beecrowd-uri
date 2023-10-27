while True:
    n = int(input())
    if n == 0: break
    l = 1
    o = '+'
    while l <= n:
        v = l
        c = 1
        while c <= n:
            if c != n: print('{:>3}'.format(v), end=' ')
            else:
                print('{:>3}'.format(v))
                o = '-'
            if v == 1: o = '+'
            elif v == n: o = '-'
            if o == '+': v += 1
            else: v -= 1
            c += 1
        l += 1
    print()
