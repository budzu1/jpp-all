import wrapper_zad6

def main():
    print("Testing my_factorial function:")
    print(wrapper_zad6.my_factorial(5))  # Expected output: 120

    print("\nTesting my_gcd function:")
    print(wrapper_zad6.my_gcd(48, 18))  # Expected output: 6

    print("\nTesting solve_diophantine function:")
    x, y, gcd = wrapper_zad6.solve_diophantine(35, 10, 55)
    print(f"x = {x}, y = {y}, gcd = {gcd}")

if __name__ == "__main__":
    main()