m = [[0 for x in range(500)] for y in range(500)]
for p in range(int(input())):
    e = input().split()
    if e[0] == 'U':
        x1 = int(e[1])
        y1 = int(e[2])
        x2 = int(e[3])
        y2 = int(e[4])
        v  = int(e[5])
        for i in range(x1-1, x2):
            for j in range(y1-1, y2): m[i][j] += v
    else: print(m[int(e[1])-1][int(e[2])-1])
