def s(n):
    if n == 1: return 1
    return s(n-1) + 1 / n
print('{:.2f}'.format(s(100)))
