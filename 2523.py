while True:
    try:
        e = str(input())
        n = int(input())
        f = [int(x) for x in str(input()).split()]
        for i in f:
            print(e[i - 1], end='')
        print()
    except EOFError: break
