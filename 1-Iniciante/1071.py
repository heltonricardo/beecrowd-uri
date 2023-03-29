def s(x, y):
    t = 0
    for i in range(x+1, y):
        if i % 2 != 0: t += i
    return t
a = int(input())
b = int(input())
if a < b: print(s(a, b))
else: print(s(b, a))
