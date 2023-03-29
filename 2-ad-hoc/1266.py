while True:
   n = int(input())
   if not n: break
   print((input()+' ').replace('0 0 ', '* ').count('*'))
