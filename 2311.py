q = int(input())
for p in range(q):
    nome = str(input())
    gd = float(input())
    notas = [float(x) for x in str(input()).split()]
    notas.sort()
    s = float(0.0)
    for i in range(1, 6):
        s += notas[i]
    s *= gd
    print(nome, '{:.2f}'.format(s))
