def fat(n):
    if n == 0: return 1
    return n * fat(n - 1)

while True: 
    e = str(input()).strip()
    if e == '0': break
    print(fat(len(e)))
