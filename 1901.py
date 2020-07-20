n = int(input())
m = []
for g in range(n):
   t = [int(x) for x in input().split()]
   m.append(t)
v = []
for g in range(2*n):
   i, j = [int(x)-1 for x in input().split()]
   v.append(m[i][j])
print(len(set(v)))
