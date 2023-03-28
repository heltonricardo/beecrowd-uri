while True:
    try:
        e = str(input()).split()
        d = e[0]
        l = e[1]
        p = e[2]
        g = ''

        if d == l == p or d != l != p != d: g = 'e'
        else:
            if d == l == 'papel':
                if p == 'pedra': g = 'e'
                elif p == 'tesoura': g = 'p'
            elif d == l == 'pedra':
                if p == 'papel': g = 'p'
                elif p == 'tesoura': g = 'e'
            elif d == l == 'tesoura':
                if p == 'pedra': g = 'p'
                elif p == 'papel': g = 'e'
 
            elif l == p == 'papel':
                if d == 'pedra': g = 'e'
                elif d == 'tesoura': g = 'd'
            elif l == p == 'pedra':
                if d == 'papel': g = 'd'
                elif d == 'tesoura': g = 'e'
            elif l == p == 'tesoura':
                if d == 'pedra': g = 'd'
                elif d == 'papel': g = 'e'

            elif d == p == 'papel':
                if l == 'pedra': g = 'e'
                elif l == 'tesoura': g = 'l'
            elif d == p == 'pedra':
                if l == 'papel': g = 'l'
                elif l == 'tesoura': g = 'e'
            elif d == p == 'tesoura':
                if l == 'pedra': g = 'l'
                elif l == 'papel': g = 'e'

        if g == 'e': print('Putz vei, o Leo ta demorando muito pra jogar...')
        elif g == 'd': print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        elif g == 'l': print('Iron Maiden\'s gonna get you, no matter how far!')
        elif g == 'p': print('Urano perdeu algo muito precioso...')
        elif g == '3': print('3 iguais ou diferentes')
    except EOFError: break
