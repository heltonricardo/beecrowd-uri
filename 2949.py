a = []
for g in range(int(input())):
   a.append(input().split()[1])
print(a.count('X'), 'Hobbit(s)')
print(a.count('H'), 'Humano(s)')
print(a.count('E'), 'Elfo(s)')
print(a.count('A'), 'Anao(s)')
print(a.count('M'), 'Mago(s)')
