// Exercise 2.41: Use your Sales_data class to rewrite the exercises in 
//     § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you 
//     should define your Sales_data class in the same file as your main function.
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo = "";
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    std::cout << "Use the following command to automate this exercise's ouput:\n\n"
              << "    [compiled_file] <ex02.41_input.txt";
    const int prac_num = 3;
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
        std::cout << sds[i].bookNo << "          " << sds[i].units_sold << "          "
                  << sds[i].revenue << "          " << sds[i].revenue/sds[i].units_sold
                  << std::endl;
    }



    // Exercise 1.21: Write a program that reads two Sales_item objects that have 
    //      the same ISBN and produces their sum.
    // Exercise 1.22: Write a program that reads several transactions for the same
    //      ISBN. Write the sum of all the transactions that were read.
    // 1.5.2
    // Exercise 1.23: Write a program that reads several transactions and counts
    //      how many transactions occur for each ISBN.
    // Exercise 1.24: Test the previous program by giving multiple transactions
    //      representing multiple ISBNs. The records for each ISBN should be
    //      grouped together.

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

    return 0;
}