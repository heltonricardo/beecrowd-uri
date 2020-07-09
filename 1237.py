def lcs(a, b):
   table = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]
   t = 0
   for i, ca in enumerate(a, 1):
      for j, cb in enumerate(b, 1):
         if ca == cb:
            table[i][j] = table[i - 1][j - 1] + 1
            if table[i][j] > l:
               t = table[i][j]
   return t

while True:
   try:
      a = input()
      b = input()
   except: break
   print(lcs(a, b))
