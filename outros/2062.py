input()
e = str(input()).split()
j = 1
for i in e:
    if len(i) == 3:
        if i[0] == 'O' and i[1] == 'B': print('OBI', end='')
        elif i[0] == 'U' and i[1] == 'R': print('URI', end='')
        else: print(i, end='')
    else: print(i, end='')
    if j < len(e): print(end=' ')
    j += 1
print()
