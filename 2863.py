while True:
    try:
        n = int(input())
        v = []
        for i in range(n):
            v.append(float(input()))
        print(sorted(v)[0])
    except EOFError: break
