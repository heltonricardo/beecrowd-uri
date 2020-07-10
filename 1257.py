q = int(input())
for p in range(q):
    n = int(input())
    s = 0
    for i in range(n):
        e = str(input())
        for k, j in enumerate(e):
            s += ord(j)-65 + i + k
    print(s)
