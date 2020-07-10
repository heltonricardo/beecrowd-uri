while True:
    try: s = input()
    except EOFError: break
    n = int(input())
    for i in range(n, 0, -1):
        s = s.replace(i * 'R', 'W')
    print(len(s))
