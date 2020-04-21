// Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
// there is a decrement operator (--) that subtracts 1. Use the decrement
// operator to write a while that prints the numbers from ten down to zero.

#include <iostream>
int main() {
    int i = 10;
    while (i >= 0) {
        std::cout << i-- << std::endl;
    }
    return 0;
}

//output:
// $ g++ ex01.10.cpp && ./a.out
// 10
// 9
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1
// 0

//notice that if I had used --i instead, it would start with 9, decrementing before returning i.