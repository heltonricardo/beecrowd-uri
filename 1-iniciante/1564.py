while True:
    try: n = int(input())
    except EOFError: break
    if n != 0: print('vai ter duas!')
    else:  print('vai ter copa!')
