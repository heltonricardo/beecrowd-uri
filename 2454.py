e = str(input())
p = True if e[0] == '1' else False
r = True if e[2] == '1' else False
if p:
    if r: print('A')
    else: print('B')
else: print('C')
