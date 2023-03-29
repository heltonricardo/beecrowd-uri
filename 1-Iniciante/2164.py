r5 = 5 ** (1 / 2)

n = int(input())
f = ((((1 + r5) / 2) ** n) - (((1 - r5) / 2) ** n)) / r5
print('{:.1f}'.format(f))
