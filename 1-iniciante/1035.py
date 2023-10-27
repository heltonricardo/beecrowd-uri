a, b, c, d = [int(x) for x in input().split()]
if b > c and d > a and c+d > a+b and c > 0 and d > 0 and a % 2 == 0:
    print('Valores aceitos')
else: print('Valores nao aceitos')
