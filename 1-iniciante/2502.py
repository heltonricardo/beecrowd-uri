while True:
    try:
        e = str(input()).split()
        c = int(e[0])
        n = int(e[1])
        w = str(input())
        z = str(input())
        A = w.upper()
        B = z.upper()
        a = w.lower()
        b = z.lower()
        for i in range(n):
            f = str(input())
            for j in f:
                if j in a: print(b[a.find(j)], end='')
                elif j in b: print(a[b.find(j)], end='')
                elif j in A: print(B[A.find(j)], end='')
                elif j in B: print(A[B.find(j)], end='')
                else: print(j, end='')
            print()
        print()
    except EOFError: break
