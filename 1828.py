n = int(input())
for i in range(n):
    s, r = str(input()).split()
    g = 'e'
    if r == 'pedra':
        if   s == 'papel':   g = 's'
        elif s == 'tesoura': g = 'r'
        elif s == 'lagarto': g = 'r'
        elif s == 'Spock':   g = 's'
    if r == 'papel':
        if   s == 'pedra':   g = 'r'
        elif s == 'tesoura': g = 's'
        elif s == 'lagarto': g = 's'
        elif s == 'Spock':   g = 'r'
    if r == 'tesoura':
        if   s == 'pedra':   g = 's'
        elif s == 'papel':   g = 'r'
        elif s == 'lagarto': g = 'r'
        elif s == 'Spock':   g = 's'
    if r == 'lagarto':
        if   s == 'pedra':   g = 's'
        elif s == 'papel':   g = 'r'
        elif s == 'tesoura': g = 's'
        elif s == 'Spock':   g = 'r'
    if r == 'Spock':
        if   s == 'pedra':   g = 'r'
        elif s == 'papel':   g = 's'
        elif s == 'tesoura': g = 'r'
        elif s == 'lagarto': g = 's'
        
    print('Caso #{}:'.format(i+1), end=' ')
    if g == 'r': print('Raj trapaceou!')
    elif g == 's': print('Bazinga!')
    else: print('De novo!')
