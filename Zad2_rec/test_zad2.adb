with Ada.Text_IO; use Ada.Text_IO;
with zad2; use zad2;

procedure Test_Zad2 is
   A : Integer := 35;
   B : Integer := 10;
   C : Natural := 55;
   X, Y : Integer;
   GCD_Value : Natural;
begin
   Put_Line("Testing zad2 package:");
   Put_Line("Factorial of 5 is " & Integer'Image(Factorial(5)));
   Put_Line("GCD of 35 and 10 is " & Integer'Image(GCD(A, B)));
   Solve_Diophantine(A, B, C, X, Y, GCD_Value);
   Put_Line("Solution to the Diophantine equation 35x + 10y = 55 is x = " & Integer'Image(X) & ", y = " & Integer'Image(Y) & ", gcd = " & Natural'Image(GCD_Value));
end Test_Zad2;