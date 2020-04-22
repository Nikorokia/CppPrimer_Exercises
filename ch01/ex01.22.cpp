// Exercise 1.22: Write a program that reads several transactions for the same
// ISBN. Write the sum of all the transactions that were read.

#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item item, totalItems;
    int count = 0;

    std::cout << "Enter several book sales with the same ISBN on different lines for summation:"
        << "\n  Format: [ISBN] [int, number copies sold] [double, per-copy sale price]"
        << "\n    Example: 0-201-78345-X 2 25.00" 
        << "\n  Program reads back:"
        << "\n    [ISBN] [number copies sold] [total revenue] [avg sale price]" 
        << "\n  Press ctrl+d (ctrl+z on Windows) when done."
        << std::endl << std::endl;
    
    while (std::cin >> item) {
        totalItems += item;
        count++;
    }

    std::cout << std::endl << "Sum of " << count << " sales:\n  "
              << totalItems << std::endl << std::endl;
}

// ---Sample Output:---
// $ g++ ex01.22.cpp && ./a.out
// Enter several book sales with the same ISBN on different lines for summation:
//   Format: [ISBN] [int, number copies sold] [double, per-copy sale price]
//     Example: 0-201-78345-X 2 25.00
//   Program reads back:
//     [ISBN] [number copies sold] [total revenue] [avg sale price]
//   Press ctrl+d (ctrl+z on Windows) when done.

// 0-201-78345-X 2 24.99
// 0-201-78345-X 2 24.99
// 0-201-78345-X 2 24.99
// 0-201-78345-X 2 24.99
// 0-201-78345-X 2 24.99

// Sum of 5 sales:
//    10 249.9 24.99