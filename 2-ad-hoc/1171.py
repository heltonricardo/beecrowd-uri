n = int(input())
v = []
for i in range(n):
    v.append(int(input()))
v.sort()
for i, j in enumerate(v):
    if i == 0:
        print('{} aparece {} vez(es)'.format(j, v.count(j)))
    elif j != u: print('{} aparece {} vez(es)'.format(j, v.count(j)))
    u = j
