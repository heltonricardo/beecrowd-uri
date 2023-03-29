n = int(input())
for i in range(n):
    r, s = str(input()).split()
    g = 'e'
    if r == 'pedra':
        if s == 'papel': g = 's'
        elif s == 'tesoura': g = 'r'
        elif s == 'lagarto': g = 'r'
        elif s == 'spock': g = 's'
    if r == 'papel':
        if s == 'pedra': g = 'r'
        elif s == 'tesoura': g = 's'
        elif s == 'lagarto': g = 's'
        elif s == 'spock': g = 'r'
    if r == 'tesoura':
        if s == 'pedra': g = 's'
        elif s == 'papel': g = 'r'
        elif s == 'lagarto': g = 'r'
        elif s == 'spock': g = 's'
    if r == 'lagarto':
        if s == 'pedra': g = 's'
        elif s == 'papel': g = 'r'
        elif s == 'tesoura': g = 's'
        elif s == 'spock': g = 'r'
    if r == 'spock':
        if s == 'pedra': g = 'r'
        elif s == 'papel': g = 's'
        elif s == 'tesoura': g = 'r'
        elif s == 'lagarto': g = 's'
    if g == 'r': print('rajesh')
    elif g == 's': print('sheldon')
    else: print('empate')
