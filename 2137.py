while True:
    try:
        n = int(input())
    except EOFError: break
    v = []
    for i in range(n):
        v.append(int(input()))
    v.sort()
    for j in v:
        print('{:04}'.format(j))
