while True:
    a, b, c = [int(x) for x in str(input()).split()]
    if a == 0 == b == 0 == c: break
    v = (a*b*c) ** (1/3)
    print(int(v))
