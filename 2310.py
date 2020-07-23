q = int(input())
s = b = a = 0
s1 = b1 = a1 = 0
for p in range(q):
    input()
    e = str(input()).split()
    s += int(e[0])
    b += int(e[1])
    a += int(e[2])
    e = str(input()).split()
    s1 += int(e[0])
    b1 += int(e[1])
    a1 += int(e[2])
print('Pontos de Saque: {:.2f} %.'.format(s1 * 100 / s))
print('Pontos de Bloqueio: {:.2f} %.'.format(b1 * 100 / b))
print('Pontos de Ataque: {:.2f} %.'.format(a1 * 100 / a))
