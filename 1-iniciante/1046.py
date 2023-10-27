a, b = [int(x) for x in input().split()]
if a < b: d = b - a
else: d = 24 - a + b
print('O JOGO DUROU {} HORA(S)'.format(d))
