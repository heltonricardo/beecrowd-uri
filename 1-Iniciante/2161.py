n = int(input())
s = 0.0

for i in range(n):
    s += 6.0
    s = (1.0 / s)
s += 3.0

print('{:.10f}'.format(s))
