while True:
    e = [int(x) for x in input().split()]
    if max(e) == 0: break
    a, b, c = e
    y = int((a * b * 100 / c) ** 0.5)
    print(y)
