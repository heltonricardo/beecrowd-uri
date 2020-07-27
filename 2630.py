n = int(input())
for i in range(n):
    alg = str(input())
    e = str(input()).split()
    r = int(e[0])
    g = int(e[1])
    b = int(e[2])
    if alg == 'eye'   : p = int(0.3 * r + 0.59 * g + 0.11 * b)
    elif alg == 'mean': p = int((r + g + b) / 3)
    elif alg == 'max' : p = sorted([r, g, b])[2]
    elif alg == 'min' : p = sorted([r, g, b])[0]
    print('Caso #{}: {}'.format(i + 1, p))
