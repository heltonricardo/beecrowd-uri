c = 1
while True:
   q = int(input())
   if not q: break
   e = sum([int (x) for x in input().replace('+', ' +').replace('-', ' -').split()])
   print('Teste', c)
   print(e)
   print()
   c += 1
