q = 0
while True:
    a = str(input())
    if len(a) == 1 and a[0] == '0': break
    q += 1
    b = str(input())
    if q != 1: print()
    print('Instancia', q)
    if a in b: print('verdadeira')
    else: print('falsa')
    
