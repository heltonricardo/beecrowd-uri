q = 0
s = 0.0
while q < 2:
    n = float(input())
    if not 0 <= n <= 10: print('nota invalida')
    else:
        s += n
        q += 1
print('media = {:.2f}'.format(s / 2))
