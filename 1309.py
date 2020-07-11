while True:
    try:
        a = str(int(input()))
        b = str(int(input()))
    except EOFError: break
    b = b.zfill(2)
    c = float(a + '.' + b)
    print('${:0,.2f}'.format(c))
