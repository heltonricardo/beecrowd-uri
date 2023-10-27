op = str(input())
s = q = 0
for i in range(12):
    for j in range(12):
        n = float(input())
        if i < j and i+j <= 10:
            s += n
            q += 1
if op == 'S': print('{:.1f}'.format(s))
else: print('{:.1f}'.format(s / q))
