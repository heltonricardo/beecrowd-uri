v = float(input())
if v <= 400: p = 15
elif v <= 800: p = 12
elif v <= 1200: p = 10
elif v <= 2000: p = 7
else: p = 4
r = v * p / 100
print('Novo salario: {:.2f}'.format(v + r))
print('Reajuste ganho: {:.2f}'.format(r))
print('Em percentual: {} %'.format(p))
