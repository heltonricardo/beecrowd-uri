e = input().split()
x = int(e[0])
y = int(e[-1])
s = 0
for i in range(y): s += x + i
print(s)
