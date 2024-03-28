package zad2 is
   type Equation_Solution is record
      X : Integer;
      Y : Integer;
      GCD : Positive;
   end record;

   function Factorial (N : Positive) return Positive;
   function GCD (A, B : Positive) return Positive;
   function Solve_Diophantine (A, B : Integer; C : Positive) return Equation_Solution;
end zad2;