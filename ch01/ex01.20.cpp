// Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
// Sales_item.h in the Chapter 1 code directory. Copy that file to your
// working directory. Use it to write a program that reads a set of book sales
// transactions, writing each transaction to the standard output.

#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item item1;
    std::cout << "Enter book sales for review:"
        << "\n  Format: [ISBN] [int, number copies sold] [double, per-copy sale price]"
        << "\n    Example: 0-201-78345-X 2 25.00" 
        << "\n  Program reads back:"
        << "\n    [ISBN] [number copies sold] [total revenue] [avg sale price]" 
        << std::endl << std::endl;
    if (std::cin >> item1) {
        std::cout << std::endl << item1 << std::endl;
    }
}

// ---Sample Output:---
// $ g++ ex01.20.cpp && ./a.out
// Enter book sales for review:
//   Format: [ISBN] [int, number copies sold] [double, per-copy sale price]
//     Example: 0-201-78345-X 2 25.00
//   Program reads back:
//     [ISBN] [number copies sold] [total revenue] [avg sale price]

// 0-201-78345-X 2 25.00

// 0-201-78345-X 2 50 25