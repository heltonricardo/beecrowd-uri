while True:
    try:
        e = str(input())
    except EOFError: break
    b = 'a'
    i = 'a'
    while '*' in e or '_' in e:
        if b == 'a':
            e = e.replace('*', '<b>', 1)
            b = 'f'
        else:
            e = e.replace('*', '</b>', 1)
            b = 'a'
        if i == 'a':
            e = e.replace('_', '<i>', 1)
            i = 'f'
        else:
            e = e.replace('_', '</i>', 1)
            i = 'a'
    print(e)
