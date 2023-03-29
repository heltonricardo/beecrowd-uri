q, v = [int(x) for x in input().split()]
a = []
for i in range(q):
   b = [i+1]
   b.append(sum([int(x) for x in input().split()]))
   a.append(b)
a = sorted(a, key=lambda x: x[1])
print(a[0][0])
print(a[1][0])
print(a[2][0])
