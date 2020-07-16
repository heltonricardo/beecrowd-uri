n = int(input())
for i in range(n):
    a, b = str(input()).split()
    q = 0
    for i in range(len(a)):
        if ord(a[i]) <= ord(b[i]): q += ord(b[i])-ord(a[i])
        else: q += 26 - ord(a[i]) + ord(b[i])
    print(q)
