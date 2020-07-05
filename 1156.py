s = 0.0
b = 1
for a in range(1, 40, 2):
    s += a / b
    b *= 2
print('{:.2f}'.format(s))
