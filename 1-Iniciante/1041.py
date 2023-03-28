X, Y = [float(x) for x in input().split()]

if X == 0.0 or Y == 0.0:
    if X == 0.0 and Y == 0.0: print('Origem')
    elif X == 0.0: print('Eixo Y')
    else: print('Eixo X')
else:
    if (X > 0.0):
        if (Y > 0.0): print('Q1')
        else: print('Q4')
    else:
        if (Y > 0.0): print('Q2')
        else: print('Q3')
