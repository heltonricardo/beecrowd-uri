e = str(input()).split()
n = int(e[0])
m = int(e[1])
c = []
for i in range(n):
    e = str(input()).split()
    c.append(e)

x = y = 0
    
for i in range(1, n - 1):
    for j in range(1, m - 1):
        if c[i][j] == '42':
            if c[i - 1][j - 1] == '7' and c[i - 1][j] == '7' and c[i - 1][j + 1] == '7' and c[i][j - 1] == '7' and c[i][j + 1] == '7' and c[i + 1][j - 1] == '7' and c[i + 1][j] == '7' and c[i + 1][j + 1] == '7':
                x = i + 1
                y = j + 1
                break
print(x, y)
