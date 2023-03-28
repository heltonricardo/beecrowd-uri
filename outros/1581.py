n = int(input())
for i in range(n):
    m = int(input())
    v = []
    for j in range(m):
        v.append(str(input()))
    v.sort()
    if v[0] == v[-1]: print(v[0])
    else: print('ingles')
