for g in range(int(input())):
   e = input().split()
   while len(e):
      m = max(e, key=lambda x: len(x))
      print(m, end='')
      e.remove(m)
      if len(e): print(end=' ')
   print()
