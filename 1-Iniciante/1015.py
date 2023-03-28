x1, y1 = [float(x) for x in str(input()).split()]
x2, y2 = [float(x) for x in str(input()).split()]
d = ((x2 - x1)**2 + (y2 - y1)**2) ** 0.5
print('{:.4f}'.format(d))
