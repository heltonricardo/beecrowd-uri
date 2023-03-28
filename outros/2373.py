q = 0
for g in range(int(input())):
    a, b = [int(x) for x in str(input()).split()]
    if a > b: q += b
print(q)
