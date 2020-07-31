for g in range(int(input())):
   e = input().replace('.', '').replace(',', '').lower()
   e = e.replace('jogo', '#j').replace('perdi', '#p').split()
   c = m = 0
   for x in e:
      if '#j' != x != '#p': c += len(x)
      else:
         c += 4
         if x == '#p': c += 1
         m < c
         m = c
         c = 0
   print(m)
