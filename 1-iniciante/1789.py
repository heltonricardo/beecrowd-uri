while True:
    try: input()
    except EOFError: break
    m = max([int(x) for x in input().split()])
    if m < 10: print(1)
    elif m < 20: print(2)
    else: print(3)
