n = int(input())
i = o = 0
for q in range(n):
    if 10 <= int(input()) <= 20: i += 1
    else: o += 1
print(i, 'in')
print(o, 'out')
