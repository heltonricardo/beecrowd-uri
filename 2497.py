c = 1
while True:
   n = int(input())
   if n == -1: break
   print('Experiment {}: {} full cycle(s)'.format(c, n // 2))
   c += 1
