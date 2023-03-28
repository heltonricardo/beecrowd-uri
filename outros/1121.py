while True:
   n, m, s = [int(x) for x in input().split()]
   if n == m == s == 0: break
   mp, proc = [], True
   for g in range(n):
      q = [y for y in input()]
      if proc:
         for c, s in enumerate(q):
            if s in 'NSLO': px, py, proc = g, c, False
      mp.append(q)
   it = input()
   fig = 0
   for h in it:
      if   h == 'D' and mp[px][py] == 'N': mp[px][py] = 'L'
      elif h == 'D' and mp[px][py] == 'L': mp[px][py] = 'S'
      elif h == 'D' and mp[px][py] == 'S': mp[px][py] = 'O'
      elif h == 'D' and mp[px][py] == 'O': mp[px][py] = 'N'
      elif h == 'E' and mp[px][py] == 'N': mp[px][py] = 'O'
      elif h == 'E' and mp[px][py] == 'O': mp[px][py] = 'S'
      elif h == 'E' and mp[px][py] == 'S': mp[px][py] = 'L'
      elif h == 'E' and mp[px][py] == 'L': mp[px][py] = 'N'
      else:
         if   mp[px][py] == 'N': ix, iy = px-1, py
         elif mp[px][py] == 'O': ix, iy = px, py-1
         elif mp[px][py] == 'S': ix, iy = px+1, py
         elif mp[px][py] == 'L': ix, iy = px, py+1
         if 0 <= ix < n and 0 <= iy < m and mp[ix][iy] != '#':
            if mp[ix][iy] == '*': fig += 1
            mp[ix][iy] = mp[px][py]
            mp[px][py] = '.'
            px, py = ix, iy
   print(fig)
