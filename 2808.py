def conv(s):
    if s[0] == 'a': v = '1'
    elif s[0] == 'b': v = '2'
    elif s[0] == 'c': v = '3'
    elif s[0] == 'd': v = '4'
    elif s[0] == 'e': v = '5'
    elif s[0] == 'f': v = '6'
    elif s[0] == 'g': v = '7'
    elif s[0] == 'h': v = '8'
    v += s[1]
    return v

e = str(input()).split()
a = conv(e[0])
b = conv(e[1])
ax = int(a[0])
ay = int(a[1])
bx = int(b[0])
by = int(b[1])
if (abs(ax - bx) == 1 and abs(ay - by) == 2) or (abs(ax - bx) == 2 and abs(ay - by) == 1):
    print('VALIDO')
else: print('INVALIDO')
