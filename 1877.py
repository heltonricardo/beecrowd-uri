n, k = [int(x) for x in input().split()]
e = [int(x) for x in input().split()]
p = v = 0

a = ''
for c, i in enumerate(e[1:]):
   if i > e[c]:
      if a == 'd': v += 1
      a = 's'
   elif i < e[c]:
      if a == 's': p += 1
      a = 'd'

print('beautiful') if k == p == v+1 else print('ugly')
