#include <stdio.h>

extern int Factorial_C(int N);
extern int GCD_C(int A, int B);
extern void Solve_Diophantine_C(int A, int B, int C, int* X, int* Y, int* GCD);

int main() {
   int X, Y, GCD;
   printf("Factorial of 5: %d\n", Factorial_C(5));
   printf("GCD of 48 and 18: %d\n", GCD_C(48, 18));
   Solve_Diophantine_C(35, 10, 55, &X, &Y, &GCD);
   printf("Solution to the Diophantine equation 35x + 10y = 55: x = %d, y = %d, gcd = %d\n", X, Y, GCD);
   return 0;
}