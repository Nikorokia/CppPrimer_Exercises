// Exercise 1.21: Write a program that reads two Sales_item objects that
// have the same ISBN and produces their sum.

#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item item1, item2;

    std::cout << "Enter two book sales with the same ISBN on different lines for summation:"
        << "\n  Format: [ISBN] [int, number copies sold] [double, per-copy sale price]"
        << "\n    Example: 0-201-78345-X 2 25.00" 
        << "\n  Program reads back:"
        << "\n    [ISBN] [number copies sold] [total revenue] [avg sale price]" 
        << std::endl << std::endl;

    std::cin >> item1 >> item2;

    std::cout << std::endl << "Sum of sales:\n  "
              << item1 + item2 << std::endl << std::endl;
}