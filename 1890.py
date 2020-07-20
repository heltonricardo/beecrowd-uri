for g in range(int(input())):
   a, b = [int(x) for x in input().split()]
   s = 26**a * 10**b if a or b else 0
   print(s)
