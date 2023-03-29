def exibir(m, sv, sc):
   v = c = 0
   for i in m:
      if i:
         print(sc[c], end='')
         c += 1
      else:
         print(sv[v], end='')
         v += 1
   print()
   
def roll(s, q):
   for i in range(q):
      s.insert(0, s[-1])
      s.pop()

n = int(input())
for q in range(n):
   s = [w for w in input()]
   m = [0 if w in 'aeiou' else 1 for w in s]
   sv, sc = [], []
   v = c = 0
   
   for r in s:
      if r in 'aeiou':
         v += 1
         sv.append(r)
      else:
         c += 1
         sc.append(r)

   print(f'Caso #{q+1}:')
   for g in range(int(input())):
      e = input().split()
      if e[0] == '2': exibir(m, sv, sc)
      else:
         t = int(e[1])
         if e[0] == '0' and v > 1: roll(sv, t % v)
         elif e[0] == '1' and c > 1: roll(sc, t % c)
