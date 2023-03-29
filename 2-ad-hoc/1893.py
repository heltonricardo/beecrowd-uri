e = str(input()).split()
a = int(e[0])
b = int(e[1])

if a < b:
    if b <= 2: print('nova')
    elif b <= 96: print('crescente')
    else: print('cheia')
else:
    if b >= 97: print('cheia')
    elif b >= 3: print('minguante')
    else: print('nova')
