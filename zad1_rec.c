#include "zad1.h"

unsigned long long my_factorial(unsigned int n)
{
    if(n == 0)
    {
        return 1;
    }
    else 
    {
        return n * my_factorial(n - 1);
    }
}

extern unsigned int my_gcd(unsigned int a, unsigned int b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        return my_gcd(b, a % b);
    }
}

struct EquationSolution solveDiophantine(int a, int b, int c) {
    if (b == 0) {
        struct EquationSolution result = {1, 0, a};
        if (c % result.gcd != 0) {
            result.x = 0;
            result.y = 0;
        } else {
            result.x *= c / result.gcd;
            result.y *= c / result.gcd;
        }
        return result;
    }
    struct EquationSolution next = solveDiophantine(b, a % b, c);
    struct EquationSolution current = {next.y, next.x - (a / b) * next.y, next.gcd};
    return current;
}