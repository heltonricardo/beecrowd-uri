for g in range(int(input())):
   n = input()
   k = n.count('!')
   n = int(n.replace('!', ''))
   f = n
   c = 1
   while(n-k*c >= 1):
      f *= n-k*c
      c += 1
   print(f)
