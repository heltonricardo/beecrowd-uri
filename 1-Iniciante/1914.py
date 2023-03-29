for g in range(int(input())):
    n1, e1, n2, e2 = input().split()
    s = sum([int(x) for x in input().split()])
    if s % 2 == 0:
        if e1 == 'PAR': print(n1)
        else: print(n2)
    else:
        if e1 == 'IMPAR': print(n1)
        else: print(n2)
