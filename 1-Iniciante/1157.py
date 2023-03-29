n = int(input())
lim = int(n / 2)+1
for i in range(1, lim):
    if n % i == 0: print(i)
print(n)
