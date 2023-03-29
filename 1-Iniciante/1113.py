while True:
    x, y = [int(z) for z in input().split()]
    if x > y: print('Decrescente')
    elif x < y: print('Crescente')
    else: break
