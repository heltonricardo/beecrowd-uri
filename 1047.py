hi, mi, hf, mf = [int(x) for x in input().split()]
ci = hi * 60 + mi
cf = hf * 60 + mf
if ci < cf: d = cf - ci
else: d = 1440 - ci + cf
h = int(d / 60)
d -= h * 60
print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(h, d))
