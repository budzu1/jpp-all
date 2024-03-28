def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def solve_diophantine(a, b, c, x=0):
    if 0 == b:
        return 0, 0, gcd(a, b)
    elif (a * x) % b == c % b:
        y = (c - a * x) // b
        return x, y, gcd(a, b)
    else:
        return solve_diophantine(a, b, c, x + 1)