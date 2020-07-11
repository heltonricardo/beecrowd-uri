while True:
   n = int(input())
   if not n: break
   ex = []
   for g in range(n):
      e = input().split()
      if len([x for x in ex if x['letra'] == e[0]]) == 0:
         if e[2] == 'incorrect':
            d = {'letra': e[0], 'pontos': 20, 'status': e[2]}
         else:
            d = {'letra': e[0], 'pontos': int(e[1]), 'status': e[2]}
         ex.append(d)
      else:
         for r in ex:
            if r['letra'] == e[0] and r['status'] == 'incorrect':
               if e[2] == 'incorrect': r['pontos'] += 20
               else:
                  r['pontos'] += int(e[1])
                  r['status'] = 'correct'
               break
   q = p = 0
   for r in ex:
      if r['status'] == 'correct':
         q += 1
         p += r['pontos']
   print(q, p)
