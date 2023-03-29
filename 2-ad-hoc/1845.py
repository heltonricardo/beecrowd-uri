while True:
    try: e = input()
    except EOFError: break
    y = ''
    for x in e:
        x = x if x != 'b' and x != 'j' and x != 'p' and x != 's' and x != 'v' and x != 'x' and x != 'z' else 'f'
        x = x if x != 'B' and x != 'J' and x != 'P' and x != 'S' and x != 'V' and x != 'X' and x != 'Z' else 'F'
        if (x != 'f' and x != 'F') or (y != 'f' and y != 'F'): print(x, end='')
        y = x
    print()
