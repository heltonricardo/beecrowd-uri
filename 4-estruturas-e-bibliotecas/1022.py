def mdc(a, b):
   a, b = abs(int(a)), abs(int(b))
   if a < b: a, b = b, a
   for i in range(b, 1, -1):
      if not a%i and not b%i: return i
   return 0

for g in range(int(input())):
   e = input().split()
   n1 = int(e[0])
   d1 = int(e[2])
   o  = e[3]
   n2 = int(e[4])
   d2 = int(e[6])
   if o == '+':
      d = d1*d2
      n = d/d1*n1 + d/d2*n2
   elif o == '-':
      d = d1*d2
      n = d/d1*n1 - d/d2*n2
   elif o == '*':
      d = d1*d2
      n = n1*n2
   else:
      d = n2*d1
      n = n1*d2
   n, d = int(n), int(d)
   print('{}/{}'.format(n, d), '=', end=' ')
   while True:
      t = mdc(n, d)
      if not t: break
      n /= t
      d /= t
   if not n: d = 1
   n, d = int(n), int(d)
   print('{}/{}'.format(n, d))
