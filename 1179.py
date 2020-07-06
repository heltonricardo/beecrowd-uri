def ex(x):
    for i, y in enumerate(x):
        if y % 2 == 0: print('par[{}] = {}'.format(i, y))
        else: print('impar[{}] = {}'.format(i, y))
    return

i = []
p = []
for g in range(15):
    n = int(input())
    if n % 2 == 0: p.append(n)
    else: i.append(n)
    if len(p) == 5:
        ex(p)
        p.clear()
    if len(i) == 5:
        ex(i)
        i.clear()
if len(i) > 0: ex(i)
if len(p) > 0: ex(p)
