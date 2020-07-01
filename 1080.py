p = m = 0
for i in range(100):
    n = int(input())
    if n > m:
        m = n
        p = i+1
print(m)
print(p)
