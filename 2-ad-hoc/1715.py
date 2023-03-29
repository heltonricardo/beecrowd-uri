e = str(input()).split()
n = int(e[0])
m = int(e[1])
k = 0
for j in range(n):
    e = str(input()).split()
    if e.count('0') > 0: continue
    k += 1
print(k)
