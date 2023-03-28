n = int(input())
s = 7
for i in range(1, n+1):
   if 11 <= i <= 30: s += 1
   elif 31 <= i <= 100: s += 2
   elif 101 <= i: s += 5
print(s)
