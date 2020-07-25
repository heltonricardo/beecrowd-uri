q, v = [int(x) for x in input().split()]
m = v
for g in range(q):
   x = int(input())
   v += x
   if v < m: m = v
print(m)
