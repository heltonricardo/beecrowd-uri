n = int(input())
for i in range(n):
    e = str(input()).split()
    a = e[0]
    b = e[1]
    if b in a:
        if b == a[len(a)-len(b):]: print('encaixa')
        else: print('nao encaixa')
    else: print('nao encaixa')
