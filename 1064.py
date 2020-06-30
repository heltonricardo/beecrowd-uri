s = 0
q = 0
for i in range(6):
    n = float(input())
    if n > 0:
        q += 1
        s += n
if q != 0: m = s / q
else: m = 0
print(q, 'valores positivos')
print('{:.1f}'.format(m))
