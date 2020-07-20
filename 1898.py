a = str(input())
b = str(input())
c = ''
p = False
for i in a:
    if i.isdigit(): c += i
    elif (i == '.'):
        if p: break
        else:
            c += i
            p = True
            
d = ''
p = False
for i in b:
    if i.isdigit(): d += i
    elif (i == '.'):
        if p: break
        else:
            d += i
            p = True
            
print('cpf', c[:11])
print('{:.2f}'.format(float(c[11:])+float(d)))
