import zad3_it
import zad3_rec

def test_factorial():
    for i in range(10):
        result_it = zad3_it.factorial(i)
        result_rec = zad3_rec.factorial(i)
        assert result_it == result_rec
        print(f"factorial({i}): iterative = {result_it}, recursive = {result_rec}")

def test_gcd():
    pairs = [(45, 18), (101, 103)]
    for a, b in pairs:
        result_it = zad3_it.gcd(a, b)
        result_rec = zad3_rec.gcd(a, b)
        assert result_it == result_rec
        print(f"gcd({a}, {b}): iterative = {result_it}, recursive = {result_rec}")

def test_solve_diophantine():
    triples = [(35, 10, 55), (101, 103, 1)]
    for a, b, c in triples:
        result_it = zad3_it.solve_diophantine(a, b, c)
        result_rec = zad3_rec.solve_diophantine(a, b, c)
        assert result_it == result_rec
        print(f"solve_diophantine({a}, {b}, {c}): iterative = {result_it}, recursive = {result_rec}")

def run_tests():
    test_factorial()
    test_gcd()
    test_solve_diophantine()

run_tests()