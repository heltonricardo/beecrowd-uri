def somas(lista, alvo, parcial=[]):
    s = sum(parcial)
    if s == alvo:
        return (len(parcial))
    if s > alvo:
        return 0
    for i in range(len(lista)):
        somas(lista, alvo, parcial+[lista[i]]) 

for g in range(int(input())):
    n, m = [int(x) for x in input().split()]
    e = [int(x) for x in input().split()]
    print(somas(e, m))
