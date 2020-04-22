// Exercise 1.23: Write a program that reads several transactions and counts
// how many transactions occur for each ISBN.
// Exercise 1.24: Test the previous program by giving multiple transactions
// representing multiple ISBNs. The records for each ISBN should be grouped
// together.

#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item itemCurr, itemNext;
    
    std::cout << "Enter several book sales (group ISBNs) on different lines for counting:"
        << "\n  Format: [ISBN] [int, number copies sold] [double, per-copy sale price]"
        << "\n    Example: 0-201-78345-X 2 25.00" 
        << "\n  Program reads back:"
        << "\n    [ISBN] [number copies sold] [total revenue] [avg sale price]" 
        << "\n  Press ctrl+d (ctrl+z on Windows) when done."
        << std::endl << std::endl;

    if (std::cin >> itemCurr) { //check for data, also load first into current
        int itemCount = 1;      //ready isbn counter
        while (std::cin >> itemNext) { //check for more data, also load next item
            if (itemCurr.isbn() == itemNext.isbn()) {   //if same ISBN, increment isbn counter
                itemCount++;
            }
            else {  //else, output totals for current ISBN, reset isbn counter
                std::cout << "ISBN " << itemCurr.isbn() << " occurs "
                          << itemCount << " times." << std::endl;
                itemCount = 1;
            }
            itemCurr = itemNext; //move forward to next item
        }
        //output last item
        std::cout << "ISBN " << itemCurr.isbn() << " occurs "
                    << itemCount << " times." << std::endl;
        itemCount = 1;
    }
}

// ---Sample Output:---
// $ g++ ex01.23,24.cpp && ./a.out <ex01.23,24_input.txt
// Enter several book sales (group ISBNs) on different lines for counting:
//   Format: [ISBN] [int, number copies sold] [double, per-copy sale price]
//     Example: 0-201-78345-X 2 25.00
//   Program reads back:
//     [ISBN] [number copies sold] [total revenue] [avg sale price]
//   Press ctrl+d (ctrl+z on Windows) when done.

// ISBN 0-201-78345-X occurs 4 times.
// ISBN 1-200-78345-X occurs 2 times.
// ISBN 2-300-78345-X occurs 4 times.