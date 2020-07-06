v = []
for i in range(20): v.append(int(input()))
v.reverse()
for i, j in enumerate(v): print('N[{}] = {}'.format(i, j))
