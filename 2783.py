e = input()
a = [int(x) for x in str(input()).split()]
l = [int(x) for x in str(input()).split()]
q = 0
for i in a:
    if not i in l: q += 1
print(q)
