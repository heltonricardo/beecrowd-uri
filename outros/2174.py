n = int(input())
v = []
for i in range(n):
    v.append(str(input()))
print('Falta(m) {} pomekon(s).'.format(151-len(set(v))))
