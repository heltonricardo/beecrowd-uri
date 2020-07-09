for g in range(int(input())):
    a, b = input().split()
    la = len(a)-1
    lb = len(b)-1
    ca = cb = i = 0
    while ca <= la and cb <= lb:
        if i % 2 == 0:
            print(a[ca], end='')
            ca += 1
        else:
            print(b[cb], end='')
            cb += 1
        i += 1
    if ca != len(a): print(a[ca:], end='')
    if cb != len(b): print(b[cb:], end='')
    print()
