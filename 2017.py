def dif(x, y):
    q = 0
    for i in range(len(x)):
        if x[i] != y[i]: q += 1
    return q

e = str(input())
n = int(input())
v = []
for i in range(5): v.append(dif(e, str(input())))
if min(v) > n: print(-1)
else:
    print(v.index(min(v))+1)
    print(min(v))
