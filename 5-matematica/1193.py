n = int(input())
for i in range(n):
    v, c = str(input()).split()
    print('Case {}:'.format(i+1))
    if c[0] == 'd':
        v = int(v)
        print(str(hex(v))[2:], 'hex')
        print(str(bin(v))[2:], 'bin')
    elif c[0] == 'h':
        print(int(v, 16), 'dec')
        print(str(bin(int(v, 16)))[2:], 'bin')
    else:
        print(int(v, 2), 'dec')
        print(str(hex(int(v, 2)))[2:], 'hex')
    print()
