e = [int(x) for x in str(input()).split()]
n = e[0]
m = e[1]
c = []
for i in range(n):
    c.append([int(x) for x in str(input()).split()])

for i in range(n):
    s = 0
    for j in range(m):
        s += c[i][j]
    if i == 0: g = s
    elif s > g: g = s

for j in range(m):
    s = 0
    for i in range(n):
        s += c[i][j]
    if s > g: g = s

print(g)
