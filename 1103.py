while True:
    h1, m1, h2, m2 = [int(x) for x in input().split()]
    if h1 == m1 == h2 == m2 == 0: break
    p = (h2 * 60 + m2) - (h1 * 60 + m1)
    p = 1440 + p if p <= 0 else p
    print(p)
