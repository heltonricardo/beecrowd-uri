for g in range(int(input())):
    e = str(input())
    if len(e) == 20 and e[0] == 'R' and e[1] == 'A':
        print(int(e[2:]))
    else: print('INVALID DATA')
