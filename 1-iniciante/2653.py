l = []
while True:
    try:
        e = str(input())
        if not e in l:
            l.append(e)
    except EOFError:
        print(len(l))
        break
