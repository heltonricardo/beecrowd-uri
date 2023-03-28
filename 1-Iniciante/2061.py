c, q = [int(x) for x in input().split()]
for i in range(q):
    if input() == 'fechou': c += 1
    else: c -= 1
print(c)
