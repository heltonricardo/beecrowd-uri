while True:
    try:
        e = str(input())
    except EOFError: break
    e = e.replace('o', '0').replace('O', '0').replace('l', '1').replace(',', '').replace(' ', '')

    if e.isdigit() and int(e) >= 0 and int(e) <= 2147483647: print(int(e))
    else: print('error')
