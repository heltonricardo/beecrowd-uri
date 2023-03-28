while True:
    try:
        a = str(input())
        b = str(input())
    except EOFError: break
    q = 0
    for i in b:
        if i in a: q += 1
    print(q)
