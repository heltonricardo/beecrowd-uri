def cod(c):
    if c in 'GQaku': return 0
    if c in 'ISblv': return 1
    if c in 'EOYcmw': return 2
    if c in 'FPZdnx': return 3
    if c in 'JTeoy': return 4
    if c in 'DNXfpz': return 5
    if c in 'AKUgq': return 6
    if c in 'CMWhr': return 7
    if c in 'BLVis': return 8
    if c in 'HRjt': return 9

n = int(input())
for i in range(n):
    s = str(input()).replace(' ', '')
    a = ''
    for l in s: a += str(cod(l))
    print(a[:12])
