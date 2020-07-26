while True:
    try:
        from math import log2
        n = int(input())
        print(int(log2(n)))
    except EOFError: break
