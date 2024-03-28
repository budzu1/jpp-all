with Interfaces.C;
with Ada.Text_IO;
with zad5;

procedure Test_Zad5 is
   N : Interfaces.C.unsigned := 5;
   A : Interfaces.C.unsigned := 48;
   B : Interfaces.C.unsigned := 18;

   C : Interfaces.C.int := 15;
   D : Interfaces.C.int := 10;
   E : Interfaces.C.int := 55;
   Result : zad5.EquationSolution;
begin
   Ada.Text_IO.Put_Line("Testing My_Factorial function:");
   Ada.Text_IO.Put_Line(Interfaces.C.unsigned_long'Image(zad5.My_Factorial(N)));

   Ada.Text_IO.Put_Line("Testing My_Gcd function:");
   Ada.Text_IO.Put_Line(Interfaces.C.unsigned'Image(zad5.My_Gcd(A, B)));

   Ada.Text_IO.Put_Line("Testing Solve_Diophantine function:");
   Result := zad5.Solve_Diophantine(C, D, E);
   Ada.Text_IO.Put_Line("x = " & Interfaces.C.int'Image(Result.X));
   Ada.Text_IO.Put_Line("y = " & Interfaces.C.int'Image(Result.Y));
   Ada.Text_IO.Put_Line("gcd = " & Interfaces.C.int'Image(Result.Gcd));
end Test_Zad5;