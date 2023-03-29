a, b = [float(x) for x in input().split()]
r = b * 100 / a - 100
print('{:.2f}%'.format(r))
