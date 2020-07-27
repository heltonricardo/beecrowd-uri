a = [int(x) for x in str(input()).split()]
b = [int(x) for x in str(input()).split()]
s = 0
if b[0] > a[0]: s+= b[0] - a[0]
if b[1] > a[1]: s+= b[1] - a[1]
if b[2] > a[2]: s+= b[2] - a[2]
print(s)
