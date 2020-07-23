def tma(s):
    for i in 'QWERTYUIOPASDFGHJKLZXCVBNM':
        if i in s: return True
    return False

def tmi(s):
    for i in 'qwertyuiopasdfghjklzxcvbnm':
        if i in s: return True
    return False

def tnu(s):
    for i in '1234567890':
        if i in s: return True
    return False

def scv(s):
    s = s.upper()
    for i in s:
        if not i in 'QWERTYUIOPASDFGHJKLZXCVBNM1234567890':
            return False
    return True

while True:
    try:
        e = str(input())
    except EOFError: break
    if 6 <= len(e) <= 32 and tma(e) and tmi(e) and tnu(e) and scv(e): print('Senha valida.')
    else: print('Senha invalida.')
