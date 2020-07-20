while True:
   try: n = int(input())
   except EOFError: break
   epr = ehd = its = 0
   for g in range(n):
      e = [x for x in input().split()][1]
      if e == 'EPR': epr += 1
      elif e == 'EHD': ehd += 1
      else: its += 1
   print('EPR:', epr)
   print('EHD:', ehd)
   print('INTRUSOS:', its)
