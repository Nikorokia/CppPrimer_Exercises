// Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
// 13) that printed a range of numbers so that it handles input in which the first
// number is smaller than the second.

// Exercise 1.11: Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.
#include <iostream>
int main() {
    std::cout << std::endl << "Enter two integers: " << std::endl;
    int x,y = 0;

    std::cin >> x >> y;

    if (x <= y) 
        for (int i = x; i <= y; i++) 
            std::cout << i << "   ";
    else 
        for (int i = y; i <= x; i++)
            std::cout << i << "   ";
    std::cout << std::endl << std::endl;

}