n = int(input())
a = 0
b = 1
f = []
for i in range(n):
    f.append(b)
    c = a + b
    a = b
    b = c
f.reverse()
for i, d in enumerate(f):
    print(d, end='')
    if i != len(f) -1: print(end=' ')
print()
