e = input().split()
p1 = int(e[1]) * 86400
e = input().split()
p1 += int(e[0]) * 3600 + int(e[2]) * 60 + int(e[4])
e = input().split()
p2 = int(e[1]) * 86400
e = input().split()
p2 += int(e[0]) * 3600 + int(e[2]) * 60 + int(e[4])
p2 -= p1
x = int(p2 / 86400)
print(x, 'dia(s)')
p2 -= x * 86400
x = int(p2 / 3600)
print(x, 'hora(s)')
p2 -= x * 3600
x = int(p2 / 60)
print(x, 'minuto(s)')
p2 -= x * 60
print(p2, 'segundo(s)')
