n, m = [int(x) for x in str(input()).split()]
a = ''
b = ''
for i in range(n):
    x, y = str(input()).split()
    a += x
    b += y
for i in range(m):
    e = str(input())
    for j in e:
        if j in a: print(b[a.find(j)], end='')
        elif j in b: print(a[b.find(j)], end='')
        else: print(j, end='')
    print()
