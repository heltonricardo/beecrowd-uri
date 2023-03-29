n = int(input())
f = 1 if n != 0 else 0
for i in range(2, n+1): f *= i
print(f)
