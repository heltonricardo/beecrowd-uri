while True:
    try:
        c = str(input())
        b = str(input())
    except EOFError: break
    if b in c: print('Resistente')
    else: print('Nao resistente')
