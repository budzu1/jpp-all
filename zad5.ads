with Interfaces.C;

package zad5 is

    type EquationSolution is record
        X   : Interfaces.C.int;
        Y   : Interfaces.C.int;
        Gcd : Interfaces.C.int;
    end record;

    function My_Factorial(N : Interfaces.C.unsigned) return Interfaces.C.unsigned_long;
    pragma Import(C, My_Factorial, "my_factorial");

    function My_Gcd(A : Interfaces.C.unsigned; B : Interfaces.C.unsigned) return Interfaces.C.unsigned;
    pragma Import(C, My_Gcd, "my_gcd");

    function Solve_Diophantine(A : Interfaces.C.int; B : Interfaces.C.int; C : Interfaces.C.int) return EquationSolution;
    pragma Import(C, Solve_Diophantine, "solveDiophantine");

end zad5;