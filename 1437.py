while True:
    n = int(input())
    if n == 0: break
    e = str(input()).replace(' ', '')
    pos = 90
    for c in e:
        if c == 'D': pos -= 90
        else: pos += 90
    fin = pos % 360
    if fin == 0: print('L')
    elif fin == 90: print('N')
    elif fin == 180: print('O')
    else: print('S')
