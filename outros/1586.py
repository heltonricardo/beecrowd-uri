def ret(n, s):
   p1 = [s-x+1 for x in range(1, s+1)]
   p2 = [x for x in range(1, n-s+1)]
   return p1+p2

while True:
   n = int(input())
   if not n: break
   lista = []
   nomes = []
   for i in range(n):
      nomes.append(input())
      lista.append(sum([ord(y) for y in nomes[i]]))
      p= 0
   #demora pra percorrer, implementar algo q vá no meio e ja descarte metade da lista, como busca binaria
   for i in range(n):
      base = ret(n, i+1)
      m = [x*y for x, y in zip(lista, base)]
      if sum(m[:i+1]) == sum(m[i+1:]):
         p = i
         break
   print(nomes[i] if p else 'Impossibilidade de empate.')     
