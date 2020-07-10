for g in range(int(input())):
    d = [x for x in input()]
    a = [x for x in input()]
    b = [x for x in input()]
    c = False
    for i in a:
        if i in d: d.remove(i)
        else:
            c = True
            break
    for i in b:
        if i in d: d.remove(i)
        else:
            c = True
            break
    if c: print('CHEATER')
    else:
        d.sort()
        for i in d: print(i, end='')
        print()
