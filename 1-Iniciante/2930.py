ent = str(input()).split()
e = int(ent[0])
d = int(ent[1])

if d-e >= 3: print('Muito bem! Apresenta antes do Natal!')
elif d-e >= 0:
    print('Parece o trabalho do meu filho!')
    e += 2
    if e < 24: print('TCC Apresentado!')
    else: print('Fail! Entao eh nataaaaal!')
else: print('Eu odeio a professora!')
