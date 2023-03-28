a, b, c = [int(x) for x in input().split()]
a = a if a != 0 else 24
b = b if b != 0 else 24
c = c if c != 0 else 24
s = a + b + c
print(s - 24 if s >= 24 else s)
