a, b, c = [float(x) for x in str(input()).split()]
print('TRIANGULO: {:.3f}'.format(a * c / 2))
print('CIRCULO: {:.3f}'.format(3.14159 * c * c))
print('TRAPEZIO: {:.3f}'.format(((a+b) * c) / 2))
print('QUADRADO: {:.3f}'.format(b * b))
print('RETANGULO: {:.3f}'.format(a * b))
