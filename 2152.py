for g in range(int(input())):
    a, b, c = [int(x) for x in input().split()]
    if c: print('{:02}:{:02} - A porta abriu!'.format(a, b))
    else: print('{:02}:{:02} - A porta fechou!'.format(a, b))
