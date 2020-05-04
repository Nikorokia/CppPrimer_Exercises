// Exercise 2.42: Write your own version of the Sales_data.h header and
//     use it to rewrite the exercise from § 2.6.2 (p. 76) [, exercise 2.41].
// Exercise 2.41: Use your Sales_data class to rewrite the exercises in 
//     § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you 
//     should define your Sales_data class in the same file as your main function.

// NOTE: this file is nearly identical to ex02.41.cpp.
//  The only changes are this note and the Sales_data struct
//  being changed to a localized #include statement.


#include <iostream>
#include <string>

#include "Sales_data.h"

int printSD(Sales_data sd) {
    std::string bn = "";
    if (sd.bookNo == bn) bn = "empty_bookNo";
    else bn = sd.bookNo;
    std::cout << bn << "          " << sd.units_sold << "          "
                << sd.revenue << "          " << sd.revenue/sd.units_sold
                << std::endl;
    return 0;
}

int main() {
    std::cout << "\nUse the following command to automate this exercise's ouput:\n\n"
              << "    [compiled_file] <ex02.41_input.txt"
              << "\n\nHow many Sales Data entries would you like to work with? ";
    int input_num = 0;
    std::cin >> input_num;
    const int prac_num = input_num;
    Sales_data sds [prac_num];

    // 1.5.1
    // Exercise 1.20: Use [Sales_data] to write a program that reads a set of book
    //      sales transactions, writing each transaction to the standard output.
    std::cout << "\n\n=== Entering Sales Data ===" << std::endl;
    for (int i = 0; i < prac_num; i++) {
        std::cout << "(" << i+1 << "," << prac_num << ")\n"
                  << "Enter a book ISBN (ex: 0-201-78345-X): ";
        std::cin >> sds[i].bookNo;
        std::cout << "\nEnter the number of copies sold: ";
        std::cin >> sds[i].units_sold;
        std::cout << "\nEnter the per-copy sale price: ";
        double sp = 0;
        std::cin >> sp;
        sds[i].revenue = sp * sds[i].units_sold;
        std::cout << std::endl;
    }
    std::cout << "\n\n=== Sales Data Readout ===" 
              << "\n[ISBN] [number of copies sold] [total revenue] [avg sale price]" 
              << std::endl;
    for (int i = 0; i < prac_num; i++) {
        printSD(sds[i]);
    }



    // Exercise 1.21: Write a program that reads two Sales_item objects that have 
    //      the same ISBN and produces their sum.
    // Exercise 1.22: Write a program that reads several transactions for the same
    //      ISBN. Write the sum of all the transactions that were read.
    Sales_data sds_grpd [prac_num];
    std::cout << "\nCompiled data:" << std::endl;
    //new set, grouped by isbn.
    //for each record in sds
    for (int d = 0; d < prac_num; d++) { // d for datum
        //test if datum in group
        for (int ge = 0; ge < prac_num; ge++) { // ge for group entry
            // if entry is same as current data, add to entry and break to next datum
            if (sds[d].bookNo == sds_grpd[ge].bookNo) {
                sds_grpd[ge].units_sold += sds[d].units_sold;
                sds_grpd[ge].revenue += sds[d].revenue;
                break;
            }
            // else if entry is empty, create entry and break to next datum
            else if (sds_grpd[ge].bookNo == "") {
                // printSD(sds_grpd[ge]);
                sds_grpd[ge].bookNo = sds[d].bookNo;
                sds_grpd[ge].revenue = sds[d].revenue;
                sds_grpd[ge].units_sold = sds[d].units_sold;
                break;
            }
            // else, allow program to move on, incrementing group entry
        }
    }
    //print grouped record, ignoring blank entries
    for (int ge = 0; ge < prac_num; ge++) {
        if (sds_grpd[ge].bookNo != "") printSD(sds_grpd[ge]);
    }



    // 1.5.2
    // Exercise 1.23: Write a program that reads several transactions and counts
    //      how many transactions occur for each ISBN.
    // Exercise 1.24: Test the previous program by giving multiple transactions
    //      representing multiple ISBNs. The records for each ISBN should be
    //      grouped together.
    std::string bookNos [prac_num];
    int bookNoCounts [prac_num];
    // similar logic as above.
    // two sets, one for ISBNs, one for counting occurances.
    // single set index used to map them together, as below.
    // for each transaction entry,
    for (int d = 0; d < prac_num; d++) { // d for datum
            // iterate through the two sets' indices
        for (int ge = 0; ge < prac_num; ge++) {
            // if transaction entry in sets, 
            //  add occurance to counts,
            //  break to next transaction entry.
            if (bookNos[ge] == sds[d].bookNo) {
                bookNoCounts[ge] += 1;
                break;
            }
            // else if sets index empty,
            //  add transaction entry ISBN to sets at index,
            //  add initial occurance to counts,
            //  break to next transaction entry.
            else if (bookNos[ge] == "") {
                bookNos[ge] = sds[d].bookNo;
                bookNoCounts[ge] = 1;
                break;
            }
            // else, allow to continue to next sets index.
        }
    }
    //print transaction ISBNs to occurances, ignoring empty indices
    std::cout << "\nIn the transactions," << std::endl;
    for (int ge = 0; ge < prac_num; ge++) {
        if (bookNos[ge] != "")
            std::cout << "  " << bookNos[ge] << "   occurs   "
                      << bookNoCounts[ge] << "   times."
                      << std::endl;
    }



    // 1.6
    // Exercise 1.25: Using [Sales_data], [rewrite] and execute the bookstore
    //      program presented in this section.
    // Sales_item total;
    // if (std::cin >> total) {
    //     Sales_item trans;
    //     while (std::cin >> trans) {
    //         if (total.isbn() == trans.isbn())
    //             total += trans;
    //         else {
    //             std::cout << total << std::endl;
    //         }
    //     }
    //     total = trans;
    //     std::cout << total << std::endl;
    // } else {
    //     std::cerr << "No data?!" << std::endl; return -1;
    // }

    // the above program takes entered transactions, groups them by ISBN,
    //      sums the same-ISBN entries, and prints the summed totals.
    // this was achieved above, in the new solutions to 1.21 and 1.22.

    std::cout << std::endl; return 0;
}