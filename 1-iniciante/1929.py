def e(x, y, z):
    return True if x+y>z and x+z>y and y+z>x else False
a, b, c, d = [int(x) for x in input().split()]
print('S' if e(a, b, c) or e(a, b, d) or e(a, c, d) or e(b, c, d) else 'N')
