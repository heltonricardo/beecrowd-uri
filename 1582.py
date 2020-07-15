def mdc(x, y, z):
    mdc = x
    while x % mdc != 0 or y % mdc != 0 or z % mdc != 0: mdc -= 1
    return mdc

while True:
    try: a, b, c = [int(x) for x in str(input()).split()]
    except EOFError: break
    if a**2==b**2+c**2 or b**2==a**2+c**2 or c**2==b**2+a**2:
        if mdc(a, b, c) == 1: print('tripla pitagorica primitiva')
        else: print('tripla pitagorica')
    else: print('tripla')
