c = r = s = 0
n = int(input())
for i in range(n):
    e = input().split()
    if e[1] == 'C': c += int(e[0])
    elif e[1] == 'R': r += int(e[0])
    else: s += int(e[0])
t = c + r + s
print('Total: {} cobaias'.format(t))
print('Total de coelhos:', c)
print('Total de ratos:', r)
print('Total de sapos:', s)
print('Percentual de coelhos: {:.2f} %'.format(c * 100 / t))
print('Percentual de ratos: {:.2f} %'.format(r * 100 / t))
print('Percentual de sapos: {:.2f} %'.format(s * 100 / t))
