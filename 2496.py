for g in range(int(input())):
   m, e, c = int(input()), input(), 0
   for i in range(m):
      if ord(e[i]) != i+65: c += 1
   print("There are the chance." if c == 2 else "There aren't the chance.")
