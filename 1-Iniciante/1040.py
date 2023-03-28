N1, N2, N3, N4 = [float(x) for x in input().split()]

MEDIA = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1) ) / 10

print('Media: {:.1f}'.format(MEDIA))

if (MEDIA >= 7.0): print('Aluno aprovado.')
elif (MEDIA < 5.0): print('Aluno reprovado.')
else:
    print('Aluno em exame.')
    NE = float(input())
    print('Nota do exame: {:.1f}'.format(NE))
    MEDIA += NE
    MEDIA /= 2.0
    if (MEDIA >= 5.0): print('Aluno aprovado.')
    else: print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(MEDIA))
