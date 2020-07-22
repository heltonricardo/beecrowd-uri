from math import log
n = int(input())
mi = n / log(n)
ma = 1.25506 * n / log(n)
print('{:.1f} {:.1f}'.format(mi, ma))
