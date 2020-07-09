while True:
    try:
        e = str(input())
    except EOFError: break
    o = 'g'
    for i in e:
        if i == ' ':
            print(end=' ')
            continue
        if o == 'g':
            print(i.upper(), end='')
            o = 'p'
        else:
            print(i.lower(), end='')
            o = 'g'
    print()
