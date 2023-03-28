from struct import pack, unpack

e = str(input())
i = e[:e.find(' ')]
e = e[e.find(' ')+1:]
f = e[:e.find(' ')]
e = e[e.find(' ')+1:]
c = e[:e.find(' ')]
e = e[e.find(' ')+1:]
fl = float(unpack('f', pack('f', float(f)))[0])
a = '{:10.6f}'.format(fl).replace(' ', '')
print('{}{}{}{}'.format(i, a, c, e))
print('{}\t{}\t{}\t{}'.format(i, a, c, e))
print('{:>10}{:>10}{:>10}{:>10}'.format(i, a, c, e))
