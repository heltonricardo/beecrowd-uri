a = 0
b = 1
l = []
n = int(input())
while n > len(l):
    p = a + b
    for j in range(b+1, p): l.append(j)
    a = b
    b = p
print(l[n-1])
