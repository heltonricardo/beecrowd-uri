while True:
    try:
        n = int(input())
        q = str(input()).count('1')
        x = (n * 2) / 3
        if q >= x: print('impeachment')
        else: print('acusacao arquivada')
    except EOFError: break
