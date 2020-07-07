co = int(input())
op = str(input())
m = []
for i in range(12):
    l = []
    for j in range(12):
        l.append(float(input()))
    m.append(l)
t = [[lin[i] for lin in m] for i in range(len(m[0]))]
s = sum(t[co])
if op == 'S': print('{:.1f}'.format(s))
else: print('{:.1f}'.format(s / 12))
