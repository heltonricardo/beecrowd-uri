n = int(input())
for i in range(n):
    e = str(input()).split()
    n = int(e[0])
    m = int(e[1])
    anterior = n
    atual = m
    resto = anterior % atual
    while resto != 0:
        anterior = atual
        atual = resto
        resto = anterior % atual
    print(atual)
