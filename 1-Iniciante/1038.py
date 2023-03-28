c, q = [int(x) for x in input().split()]
if c == 1: print('Total: R$ {:.2f}'.format(q * 4))
elif c == 2: print('Total: R$ {:.2f}'.format(q * 4.5))
elif c == 3: print('Total: R$ {:.2f}'.format(q * 5))
elif c == 4: print('Total: R$ {:.2f}'.format(q * 2))
else: print('Total: R$ {:.2f}'.format(q * 1.5))
