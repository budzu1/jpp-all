#include "wrap.h"
#include <stdio.h>

int main() {
    unsigned n = 5;
    printf("Factorial of %u is %lld\n", n, my_factorial(n));

    unsigned a = 60, b = 48;
    printf("GCD of %u and %u is %u\n", a, b, my_gcd(a, b));

    int x = 35, y = 15, z = 5;
    EquationSolution sol = solve_diophantine(x, y, z);
    printf("Solution of %d*x + %d*y = %d is x = %d, y = %d, gcd = %d\n", x, y, z, sol.x, sol.y, sol.gcd);

    return 0;
}