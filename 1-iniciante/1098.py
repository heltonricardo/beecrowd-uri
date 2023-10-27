flag = 0

for A in range(3):
    if flag == 1: break
    for B in range(0, 9, 2):
        if flag == 1: break
        for C in range(A+1, A+4):
            if B != 0: print('I={}.{} J={}.{}'.format(A, B, C, B))
            else: print('I={} J={}'.format(A, C))
            if A == 2 and B == 0 and C == 5: flag = 1
