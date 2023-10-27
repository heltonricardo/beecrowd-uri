d = {2:0, 3:0, 4:0, 5:0}
input()
v = [int(x) for x in input().split()]
for i in v:
    if i % 2 == 0: d[2] += 1
    if i % 3 == 0: d[3] += 1
    if i % 4 == 0: d[4] += 1
    if i % 5 == 0: d[5] += 1
print(d[2], 'Multiplo(s) de 2')
print(d[3], 'Multiplo(s) de 3')
print(d[4], 'Multiplo(s) de 4')
print(d[5], 'Multiplo(s) de 5')
