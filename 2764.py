while True:
    try:
        e = str(input()).split('/')
        print('{}/{}/{}'.format(e[1], e[0], e[2]))
        print('{}/{}/{}'.format(e[2], e[1], e[0]))
        print('{}-{}-{}'.format(e[0], e[1], e[2]))
    except EOFError: break
