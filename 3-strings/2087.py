while True:
    n = int(input())
    if n == 0: break
    l = []
    for g in range(n): l.append(input())
    c = True
    l.sort()
    for i in range(n-1):
        for j in range(i+1, n):
            if l[i] in l[j]:
                c = False
                break
    print('Conjunto Bom' if c else 'Conjunto Ruim')
