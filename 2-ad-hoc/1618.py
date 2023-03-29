n = int(input())
for i in range(n):
    e = [int(x) for x in str(input()).split()]
    ax = e[0]
    ay = e[1]
    bx = e[2]
    by = e[3]
    cx = e[4]
    cy = e[5]
    dx = e[6]
    dy = e[7]
    rx = e[8]
    ry = e[9]
    if dy >= ry and cy >= ry and ay <= ry and by <= ry:
        if dx <= rx and ax <= rx and cx >= rx and bx >= rx:
            print(1)
        else: print(0)
    else: print(0)
