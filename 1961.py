a, q = [int(x) for x in input().split()]
v = [int(x) for x in input().split()]
c = True
for i in range(q-1):
    if abs(v[i]-v[i+1]) > a:
        c = False
        break
print('YOU WIN' if c else 'GAME OVER')
