while True:
    try:
        e = str(input()).strip()
    except EOFError: break
    p = []
    for i in e:
        if i == '(': p.append('(')
        elif i == ')':
            if len(p) > 0: p.pop()
            else:
                p.append(')')
                break
    print('correct' if len(p) == 0 else 'incorrect')
