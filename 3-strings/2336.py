def val(c):
    return ord(c)-65

while True:
    try: e = str(input())
    except EOFError: break
    s = 0
    for i in range(len(e)):
        print(val(e[i]), len(e)-i-1)
    print(s)
