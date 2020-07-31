from math import sqrt
p = lambda xi, yi, xf, yf, k: sqrt((xi-xf)**2 + (yi-yf)**2) > k

n, k, xf, yf = [int(x) for x in input().split()]
xi = yi = 0
r = 'indo'
if p(0, 0, xf, yf, k): r = 'Trap 1'
for g in range(n):
   o = input()
   if o == 'C': yi += 1
   elif o == 'B': yi -= 1
   elif o == 'E': xi -= 1
   elif o == 'D': xi += 1
   if r == 'indo' and xi == xf and yi == yf: r = 'Sucesso'
   if r == 'indo' and (g+1 == n or p(xi, yi, xf, yf, k)):
      r = 'Trap ' + str(g+1)
print(r)
