while True:
    try:
        e = str(input()).split()
        a = int(e[0])
        b = int(e[1])
        l = []
        for i in range(a):
            l.append(int(input()))
        l.sort(reverse = True)
        for i in range(b):
            print(l[int(input()) - 1])
        l.clear()
    except EOFError: break
