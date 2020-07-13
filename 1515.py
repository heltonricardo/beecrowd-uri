while True:
    n = int(input())
    if n == 0: break
    for q in range(n):
        e = str(input()).split()
        nome = e[0]
        ano = int(e[1])
        dif = int(e[2])
        if q == 0:
            menor = ano - dif
            ganha = nome
        if menor > ano - dif:
            menor = ano - dif
            ganha = nome
    print(ganha)
