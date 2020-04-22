// Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
#include <iostream>
int main() {
    std::cout << std::endl;

    // Exercise 1.9: Write a program that uses a [for] to sum the numbers from
    // 50 to 100.
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        std::cout<<"+"<<i;
        sum += i;
    }
    std::cout << std::endl;
    std::cout << "The sum of numbers from 50 to 100 is " << sum << std::endl;


    // Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
    // there is a decrement operator (--) that subtracts 1. Use the decrement
    // operator to write a [for] that prints the numbers from ten down to zero.
    std::cout << std::endl;
    for (int i = 10; i >= 0; i--) {
        std::cout << i << "   ";
    }
    std::cout << std::endl;

    // Exercise 1.11: Write a program that prompts the user for two integers.
    // Print each number in the range specified by those two integers.
    std::cout << std::endl << "Enter two integers: " << std::endl;
    int x,y = 0;
    std::cin >> x >> y;
    for (int i = x; i <= y; i++) {
        std::cout << i << "   ";
    }
    for (int i = y; i <= x; i++) {
        std::cout << i << "   ";
    }
    std::cout << std:: endl;

    std::cout << std::endl;
    return 0;
}