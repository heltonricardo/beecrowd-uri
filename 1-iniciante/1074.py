n = int(input())
for i in range(n):
    q = int(input())
    if q == 0: print('NULL')
    else:
        if q % 2 == 0: print('EVEN', end=' ')
        else: print('ODD', end=' ')
        if q > 0: print('POSITIVE')
        else: print('NEGATIVE')
