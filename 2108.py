m = ''
p = True
while True:
    e = str(input()).split()
    if e[0] == '0': break
    for c, i in enumerate(e):
        if len(i) >= len(m): m = i
        print(len(i), end='')
        if c != len(e)-1: print('-', end='')
    print()
print()
print('The biggest word:', m)
