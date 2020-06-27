v = float(input())

print('NOTAS:')
x = int(v // 100)
print('{} nota(s) de R$ 100.00'.format(x))
v -= x * 100

x = int(v // 50)
print('{} nota(s) de R$ 50.00'.format(x))
v -= x * 50

x = int(v // 20)
print('{} nota(s) de R$ 20.00'.format(x))
v -= x * 20

x = int(v // 10)
print('{} nota(s) de R$ 10.00'.format(x))
v -= x * 10

x = int(v // 5)
print('{} nota(s) de R$ 5.00'.format(x))
v -= x * 5

x = int(v // 2)
print('{} nota(s) de R$ 2.00'.format(x))
v -= x * 2

print('MOEDAS:')
x = int(v // 1)
print('{} moeda(s) de R$ 1.00'.format(x))
v -= x * 1

x = int(v // 0.5)
print('{} moeda(s) de R$ 0.50'.format(x))
v -= x * 0.5

x = int(v // 0.25)
print('{} moeda(s) de R$ 0.25'.format(x))
v -= x * 0.25

x = int(v // 0.1)
print('{} moeda(s) de R$ 0.10'.format(x))
v -= x * 0.1

x = int(v // 0.05)
print('{} moeda(s) de R$ 0.05'.format(x))
v -= x * 0.05

print('{:.0f} moeda(s) de R$ 0.01'.format(v * 100))
