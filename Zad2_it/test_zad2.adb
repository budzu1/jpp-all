with Ada.Text_IO; use Ada.Text_IO;
with zad2; use zad2;

procedure Test_Zad2 is
    A : Integer := 15;
    B : Integer := 20;
    C : Positive := 55;
    Result : Equation_Solution;
begin
    Put_Line("Testing zad2 package:");
    Put_Line("Factorial is " & Integer'Image(Factorial(5)));
    Put_Line("GCD is " & Integer'Image(GCD(48, 18)));
    Result := Solve_Diophantine(A, B, C);
    Put_Line("Solution to the Diophantine equation x = " & Integer'Image(Result.X) & ", y = " & Integer'Image(Result.Y) & ", gcd = " & Positive'Image(Result.GCD));
end Test_Zad2;