#include "zad1.h"
#include <stdio.h>

unsigned long long my_factorial(unsigned int n)
{
    printf("Iterative\n");
    unsigned long long resoult = 1;

    for(int i = 1; i <= n; i++)
    {
        resoult = resoult * i;
    }

    return resoult;
}

extern unsigned int my_gcd(unsigned int a, unsigned int b)
{
    printf("Iterative\n");
    while (b != 0) {
        unsigned temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct EquationSolution solveDiophantine(int a, int b, int c) {
    printf("Iterative\n");
    int x = 0, y = 1, last_x = 1, last_y = 0, temp;
    while (b != 0) {
        int quotient = a / b;
        temp = a;
        a = b;
        b = temp % b;
        temp = x;
        x = last_x - quotient * x;
        last_x = temp;
        temp = y;
        y = last_y - quotient * y;
        last_y = temp;
    }
    struct EquationSolution result = {last_x, last_y, a};
    if (c % result.gcd != 0) {
        result.x = 0;
        result.y = 0;
    } else {
        result.x *= c / result.gcd;
        result.y *= c / result.gcd;
    }
    return result;
}

