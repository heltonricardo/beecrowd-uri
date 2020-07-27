for g in range(int(input())):
   a, b = [int(x) for x in input().split()]
   r = a % b
   a //= b
   if r: a += 1
   print(a)
