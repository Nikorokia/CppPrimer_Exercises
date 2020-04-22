// Exercise 1.25: Using the Sales_item.h header from the Web site,
// compile and execute the bookstore program presented in this section.

#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item total;

    if (std::cin >> total) {
        Sales_item trans;

        while (std::cin >> trans) {

            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {

        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

// ---Sample Output:---
// $ g++ ex01.25.cpp && ./a.out <ex01.23,24_input.txt
// 0-201-78345-X 6 149.94 24.99
// 1-200-78345-X 2 41.98 20.99
// 2-300-78345-X 9 134.91 14.99