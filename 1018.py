v = int(input())
print(v)

x = int(v // 100)
print('{} nota(s) de R$ 100,00'.format(x))
v -= x * 100

x = int(v // 50)
print('{} nota(s) de R$ 50,00'.format(x))
v -= x * 50

x = int(v // 20)
print('{} nota(s) de R$ 20,00'.format(x))
v -= x * 20

x = int(v // 10)
print('{} nota(s) de R$ 10,00'.format(x))
v -= x * 10

x = int(v // 5)
print('{} nota(s) de R$ 5,00'.format(x))
v -= x * 5

x = int(v // 2)
print('{} nota(s) de R$ 2,00'.format(x))
v -= x * 2

print('{} nota(s) de R$ 1,00'.format(v))
