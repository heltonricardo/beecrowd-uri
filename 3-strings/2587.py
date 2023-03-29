def adc(x, p):
    for i in range(len(p)):
        if p[i] == '_': continue
        if not x[i] == p[i]: return False
    return True

for g in range(int(input())):
    a = str(input())
    b = str(input())
    p = str(input())
    a1 = a[p.find('_')]
    a2 = a[p.rfind('_')]
    b1 = b[p.find('_')]
    b2 = b[p.rfind('_')]
    if adc(a, p) and adc(b, p):
        print('Y' if a == b or (a2 == b1 or a1 == b2) else 'N')
    else: print('Y')
