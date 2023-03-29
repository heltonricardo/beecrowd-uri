while True:
    try: n = int(input())
    except EOFError: break
    s = c = 1
    while s % n != 0:
        s += 10 * c
        c *= 10
    print(len(str(s)))
