c = 1
s = 0
while c <= 3:
    e = input().split()[0]
    if e != 'caw':
        e = e.replace('*', '1').replace('-', '0')
        s += int(e, 2)
    else:
        print(s)
        s = 0
        c += 1
