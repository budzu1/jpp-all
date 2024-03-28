#include "wrap.h"
#include <stdio.h>

int main() {
   printf("Factorial of 5: %d\n", My_Factorial(5));
   printf("GCD of 48 and 18: %d\n", My_GCD(48, 18));
   struct EquationSolution solution = solveDiophantine(35, 10, 55);
   printf("Solution to the Diophantine equation 35x + 10y = 55: x = %d, y = %d, gcd = %d\n", solution.x, solution.y, solution.gcd);
   return 0;
}