def hip(a, b, c):
    if b < a > c and a ** 2 == b ** 2 + c ** 2: return True
    elif a < b > c and b ** 2 == a ** 2 + c ** 2: return True
    elif a < c > b and c ** 2 == a ** 2 + b ** 2: return True
    else: return False

e = str(input()).split()
a = int(e[0])
b = int(e[1])
c = int(e[2])

if(a < b + c and b < a + c and c < a + b):
    if(a == b == c):
        print('Valido-Equilatero')
    elif(a == b or a == c or b == c):
        print('Valido-Isoceles')
    else:
        print('Valido-Escaleno')
    if hip(a, b, c): print('Retangulo: S')
    else: print('Retangulo: N')
else:
    print('Invalido')
