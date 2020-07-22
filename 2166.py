n = int(input())
s = 0

for i in range(n):
    s += 2.0
    s = (1.0 / s)
s += 1.0

print('{:.10f}'.format(s))
