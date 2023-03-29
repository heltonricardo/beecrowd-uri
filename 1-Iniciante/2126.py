i = 1
while True:
    try:
        a = str(input())
        b = str(input())
        print('Caso #{}:'.format(i))
        s = b.count(a)
        if s:
            print('Qtd.Subsequencias:', b.count(a))
            print('Pos:', b.rfind(a) + 1)
        else: 
            print('Nao existe subsequencia')
        print()
        i += 1
    except EOFError:
        break
