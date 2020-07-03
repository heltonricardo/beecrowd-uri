a = int(input())
b = int(input())
if a > b: a, b = b, a
for i in range(a+1, b):
    r = i % 5
    if r == 2 or r == 3: print(i)
