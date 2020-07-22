n = int(input())

for i in range(n):
    gal = input()
    t = 0.09
    q = gal.count('e') - 1
    q *= 0.01
    t += q
    print('{:.2f}'.format(t))
