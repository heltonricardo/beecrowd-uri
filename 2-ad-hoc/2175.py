e = [float(x) for x in str(input()).split()]
if sorted(e)[0] == sorted(e)[1]: print('Empate')
else:
    if e.index(min(e)) == 0: print('Otavio')
    elif e.index(min(e)) == 1: print('Bruno')
    else: print('Ian')
