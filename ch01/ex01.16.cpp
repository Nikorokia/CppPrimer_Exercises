// Exercise 1.16: Write your own version of a program that prints the sum of
// a set of integers read from cin.
#include <iostream>
int main() {
    std::cout << std::endl << "Enter some integers: " << std::endl;
    int input,sum = 0;

    while (std::cin >> input) {
        std:: cin >> input;
        sum += input;
    }

    std::cout << "The sum is: " << sum << std::endl << std::endl;

    return 0;
}