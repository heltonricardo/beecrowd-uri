pa = im = po = ne = 0
for i in range(5):
    n = int(input())
    if n % 2 == 0: pa += 1
    else: im += 1
    if n > 0: po += 1
    elif n < 0: ne += 1
print(pa , 'valor(es) par(es)')
print(im , 'valor(es) impar(es)')
print(po , 'valor(es) positivo(s)')
print(ne , 'valor(es) negativo(s)')
