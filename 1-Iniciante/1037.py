num = float(input())

if (0 <= num <= 100):
    if (num <= 25.0): print('Intervalo [0,25]')
    elif (num <= 50.0): print('Intervalo (25,50]')
    elif (num <= 75.0): print('Intervalo (50,75]')
    else: print('Intervalo (75,100]')
else: print('Fora de intervalo')
