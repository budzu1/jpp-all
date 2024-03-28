#ifndef ZAD1_H
#define ZAD1_H

struct EquationSolution {
    int x;
    int y;
    int gcd;
};

extern unsigned long long my_factorial(unsigned int n);
extern unsigned int my_gcd(unsigned int a, unsigned int b);
struct EquationSolution solveDiophantine(int a, int b, int c);

#endif