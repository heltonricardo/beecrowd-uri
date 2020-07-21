while True:
    try: horario = str(input())
    except EOFError: break
    calc = int(horario[0]) * 60 + int(horario[2:]) - 420
    calc = 0 if calc < 0 else calc
    print('Atraso maximo: {}'.format(calc))
