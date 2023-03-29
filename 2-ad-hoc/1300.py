while True:
    try:
        n = int(input())
        print('Y' if n % 6 == 0 else 'N')
    except EOFError:
        break
