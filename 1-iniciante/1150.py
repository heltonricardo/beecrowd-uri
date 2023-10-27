x = int(input())
while True:
    z = int(input())
    if z > x: break
s = 0
i = 0
while s <= z:
    s += x + i
    i += 1
print(i)
