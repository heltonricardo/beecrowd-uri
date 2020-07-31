from math import sqrt
def eprimo(n):
   r = int(sqrt(n))
   for i in range(2, r+1):
      if not n%i: return 0
   return 1

n = int(input())
i = 0
if eprimo(n): i = 1
else:
   a = n-2
   while a > 0:
      while not eprimo(a): a -= 1
      i += 1
      n -= a
      a = n
print(i)
