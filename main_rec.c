#include <stdio.h>
#include "zad1.h"

int main() {
    unsigned int n = 5;
    printf("Factorial of %u is %llu\n", n, my_factorial(n));

    unsigned int a = 35, b = 10;
    printf("GCD of %u and %u is %u\n", a, b, my_gcd(a, b));

    int c = 55;
    struct EquationSolution result = solveDiophantine(a, b, c);
    printf("Solution to the Diophantine equation %dx + %dy = %d is x = %d, y = %d, gcd = %d\n", a, b, c, result.x, result.y, result.gcd);

    return 0;
}