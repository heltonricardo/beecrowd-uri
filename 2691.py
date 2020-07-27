for i in range(int(input())):
    a, b = [int(x) for x in str(input()).split('x')]
    for j in range(5, 11):
        if a != b: print('{} x {} = {} && {} x {} = {}'.format(a, j, a*j, b, j, b*j))
        else: print('{} x {} = {}'.format(a, j, a*j))
