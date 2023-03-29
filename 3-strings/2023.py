c = True

while True:
    try:
        e = str(input())
    except EOFError: break
    
    if c:
        v = e
        c = False
        continue

    l = [e.upper(), v.upper()]
    l.sort()
    if l[1] == e.upper(): v = e

print(v)
