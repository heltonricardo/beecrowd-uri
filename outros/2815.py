e = str(input()).split()
for c, i in enumerate(e):
    if len(i) > 3 and i[0] == i[2] and i[1] == i[3]:
        print(i[2:], end='')
    else: print(i, end='')
    if c != len(e)-1: print(end=' ')
print()
