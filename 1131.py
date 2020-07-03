c = 1
q = i = g = e = 0
while c == 1:
    x, y = [int(z) for z in input().split()]
    q += 1
    if x > y: i += 1
    elif x < y: g += 1
    else: e += 1
    print('Novo grenal (1-sim 2-nao)')
    c = int(input())
print(q,'grenais')
print('Inter:{}'.format(i))
print('Gremio:{}'.format(g))
print('Empates:{}'.format(e))
if i > g: print('Inter venceu mais')
elif g < i: print('Gremio venceu mais')
else: print('Nao houve vencedor')
