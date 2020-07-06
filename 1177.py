n = int(input())
c = 0
for i in range(1000):
    print('N[{}] = {}'.format(i, c))
    c += 1
    if c == n: c = 0
