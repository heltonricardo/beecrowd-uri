while True:
    try:        
        n = float(input())
        if not str(n)[0] == '-':
            print('+', end='')
        print('{:.4E}'.format(n))
    except EOFError:
        break
