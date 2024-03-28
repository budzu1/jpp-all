#ifndef WRAP_H
#define WRAP_H

#include <Python.h>

typedef struct {
    int x;
    int y;
    int gcd;
} EquationSolution;

long long my_factorial(unsigned n);

unsigned my_gcd(unsigned a, unsigned b);

EquationSolution solve_diophantine(int a, int b, int c);

#endif // WRAP_H