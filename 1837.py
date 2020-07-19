a, b = [int(x) for x in input().split()]

q = int(a / b)
r = a - b * q

if a < 0 and b < 0:
    if r < 0 and q <= 0:
        q += 1
        r = -(b * q) + a
    elif r < 0 and q > 0:
        q += 1
        r = -(b * q) + a
else:
    if r < 0 and q <= 0:
        q -= 1
        r = -(b * q) + a
    elif r < 0 and q > 0:
        q += 1
        r = -(b * q) + a
print(q, r)

