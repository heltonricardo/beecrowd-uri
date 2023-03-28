from struct import pack, unpack

e = str(input()).split()
a = float(unpack("f", pack("f", float(e[0])))[0])
b = float(unpack("f", pack("f", float(e[1])))[0])

e = str(input()).split()
c = float(e[0])
d = float(e[1])

print('A = {:.6f}, B = {:.6f}'.format(a, b))
print('C = {:.6f}, D = {:.6f}'.format(c, d))

print('A = {:.1f}, B = {:.1f}'.format(a, b))
print('C = {:.1f}, D = {:.1f}'.format(c, d))

print('A = {:.2f}, B = {:.2f}'.format(a, b))
print('C = {:.2f}, D = {:.2f}'.format(c, d))

print('A = {:.3f}, B = {:.3f}'.format(a, b))
print('C = {:.3f}, D = {:.3f}'.format(c, d))

print('A = {:.3E}, B = {:.3E}'.format(a, b))
print('C = {:.3E}, D = {:.3E}'.format(c, d))

print('A = {:.0f}, B = {:.0f}'.format(a, b))
print('C = {:.0f}, D = {:.0f}'.format(c, d))
