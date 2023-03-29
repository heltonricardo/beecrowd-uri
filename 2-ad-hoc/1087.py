while True:
    a, b, c, d = [int(x) for x in input().split()]
    if a == b == c == d == 0: break
    elif a == c and b == d: print(0)
    elif a == c or b == d or abs(a-c) == abs(b-d): print(1)
    else: print(2)
