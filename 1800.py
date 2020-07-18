e = [int(x) for x in str(input()).split()]
q = e[0]
e = [int(x) for x in str(input()).split()]
for i in range(q):
    n = int(input())
    if n in e: print(0)
    else:
        print(1)
        e.append(n)
