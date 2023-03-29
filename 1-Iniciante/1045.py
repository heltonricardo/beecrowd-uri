a, b, c = sorted([float(x) for x in input().split()], reverse=True)
if a >= b + c: print('NAO FORMA TRIANGULO')
else:
    if a**2 > b**2 + c**2: print('TRIANGULO OBTUSANGULO')
    elif a**2 < b**2 + c**2: print('TRIANGULO ACUTANGULO')
    else: print('TRIANGULO RETANGULO')
    if a == b == c: print('TRIANGULO EQUILATERO')
    elif a == b or a == c or b == c: print('TRIANGULO ISOSCELES')
