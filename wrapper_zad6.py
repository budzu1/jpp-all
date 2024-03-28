from ctypes import CDLL, c_int, Structure, c_uint, c_ulonglong

class EquationSolution(Structure):
    _fields_ = [("x", c_int), ("y", c_int), ("gcd", c_int)]

lib = CDLL('./zad1_rec.dll')

lib.my_factorial.argtypes = [c_uint]
lib.my_factorial.restype = c_ulonglong

lib.my_gcd.argtypes = [c_uint, c_uint]
lib.my_gcd.restype = c_uint

lib.solveDiophantine.argtypes = [c_int, c_int, c_int]
lib.solveDiophantine.restype = EquationSolution

def my_factorial(n):
    lib = CDLL('./zad1_rec.dll')
    lib.my_factorial.argtypes = [c_int]
    lib.my_factorial.restype = c_int
    return lib.my_factorial(n)

def my_gcd(a, b):
    return lib.my_gcd(a, b)

def solve_diophantine(a, b, c):
    result = lib.solveDiophantine(a, b, c)
    return result.x, result.y, result.gcd