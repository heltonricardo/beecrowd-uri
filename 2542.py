while True:
    try:
        input()
        e = str(input()).split()
        ncm = int(e[0])
        ncl = int(e[1])
        cm = []
        cl = []
        for i in range(ncm): cm.append([int(x) for x in str(input()).split()])
        for i in range(ncl): cl.append([int(x) for x in str(input()).split()])
        e = str(input()).split()
        ms = int(e[0])
        lu = int(e[1])
        a = int(input())
        if cm[ms-1][a-1] > cl[lu-1][a-1]: print('Marcos')
        elif cm[ms-1][a-1] < cl[lu-1][a-1]: print('Leonardo')
        else: print('Empate')
    except EOFError: break
