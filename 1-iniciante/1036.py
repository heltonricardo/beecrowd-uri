A, B, C = [float(x) for x in input().split()]

DT = (B * B) - (4 * A * C);

if A != 0 and DT > 0:
    R1 = (-B + DT**0.5)/(2 * A);
    R2 = (-B - DT**0.5)/(2 * A);
    print('R1 = {:.5f}'.format(R1))
    print('R2 = {:.5f}'.format(R2))
else: print('Impossivel calcular')
