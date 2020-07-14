n = int(input())
for i in range(n):
    e = str(input()).replace(' ', '').upper()
    q = 0
    for j in 'QWERTYUIOPASDFGHJKLZXCVBNM':
        if j in e: q += 1
    if q == 26: print('frase completa')
    elif q >= 13: print('frase quase completa')
    else: print('frase mal elaborada')
