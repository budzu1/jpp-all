def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def solve_diophantine(a, b, c):
    for x in range(abs(b)):
        if (a * x) % b == c % b:
            y = (c - a * x) // b
            return x, y, gcd(a, b)
    return 0, 0