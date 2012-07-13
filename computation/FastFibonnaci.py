def fibonacci(n):
    if n == 0:
        return (0, 1)
    else:
        a, b = fibonacci(n/2)
        c     = a*(2*b - a)
        d     = b*b + a*a
        return (c, d) if n%2 == 0 else (d, c+d)

print fibonacci(100000)[0]