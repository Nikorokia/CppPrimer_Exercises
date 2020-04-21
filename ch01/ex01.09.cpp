// Exercise 1.9: Write a program that uses a while to sum the numbers from
// 50 to 100.

#include <iostream>
int main()
{ 
    int i = 50, r = 0;
    while (i <= 100) {
        std::cout << "i=" << i << ", r=" << r << ". adding." << std::endl;
        r += i;
        i++;
    }
    std::cout << "The sum of numbers from 50 to 100 is " << r << "." << std::endl;

    return 0;
}