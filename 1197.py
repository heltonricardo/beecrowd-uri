while True:
    try: v, t = [int(x) for x in input().split()]
    except EOFError: break
    print(v * t * 2)
