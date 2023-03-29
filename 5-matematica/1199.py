while True:
    e = str(input())
    if e[0] == '-': break
    if 'x' in e: print(int(e, 16))
    else: print(str(hex(int(e))).upper().replace('X', 'x'))
