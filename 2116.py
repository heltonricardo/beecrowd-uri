def ehprimo(n):
   if n == 1 or n == 2: return True
   t = int(n**0.5 + 2)
   for i in range(2, t):
      if n % i == 0: return False
   return True

n, m = [int(x) for x in input().split()]
p1 = p2 = 0
while not p1:
   if ehprimo(n): p1 = n
   else: n -= 1
while not p2:
   if ehprimo(m): p2 = m
   else: m -= 1
print(p1*p2)
