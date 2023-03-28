def lm(c):
    return c.isupper() and c.isalpha()

n = int(input())
for i in range(n):
    e = str(input())
    if len(e) == 8 and lm(e[:3]) and e[3] == '-' and e[4:].isdigit():
        if e[-1] == '1' or e[-1] == '2': print('MONDAY')
        elif e[-1] == '3' or e[-1] == '4': print('TUESDAY')
        elif e[-1] == '5' or e[-1] == '6': print('WEDNESDAY')
        elif e[-1] == '7' or e[-1] == '8': print('THURSDAY')
        elif e[-1] == '9' or e[-1] == '0': print('FRIDAY')
    else: print('FAILURE')
