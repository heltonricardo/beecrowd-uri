line = False
while True:
   try: n = int(input())
   except: break
   if line: print()
   line = True
   leap, hulu = False, False
   
   if n % 400 == 0 or (n % 4 == 0 and n % 100 != 0):
      print('This is leap year.')
      leap = True
      
   if n % 15 == 0:
      print('This is huluculu festival year.')
      hulu = True
      
   if leap and n % 55 == 0:
      print('This is bulukulu festival year.')

   if not leap and not hulu:
      print('This is an ordinary year.')
