def dec(f):
    return f-int(f)
while True:
    try:
        n = float(input())
        c = float(input())
        print(int(n) if dec(n) < dec(c) else int(n+1))
    except EOFError: break
