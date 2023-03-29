s = 0
for g in range(int(input())):
   t, v = [int(x) for x in input().split()]
   s += t * v
print(s)
