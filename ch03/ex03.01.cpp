// Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
//      with appropriate using declarations.

// Exercises Section 2.6.2
// Exercise 2.41: Use your Sales_data class to rewrite the exercises in 
//     § 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you 
//     should define your Sales_data class in the same file as your main function.

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    string bookNo = "";
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int printSD(Sales_data sd) {
    string bn = "";
    if (sd.bookNo == bn) bn = "empty_bookNo";
    else bn = sd.bookNo;
    cout << bn << "          " << sd.units_sold << "          "
                << sd.revenue << "          " << sd.revenue/sd.units_sold
                << endl;
    return 0;
}

int main() {
    cout << "\nUse the following command to automate this exercise's ouput:\n\n"
              << "    [compiled_file] <ex03.01_input.txt"
              << "\n\nHow many Sales Data entries would you like to work with? ";
    int input_num = 0;
    cin >> input_num;
    const int prac_num = input_num;
    Sales_data sds [prac_num];

    // 1.5.1
    // Exercise 1.20: Use [Sales_data] to write a program that reads a set of book
    //      sales transactions, writing each transaction to the standard output.
    cout << "\n\n=== Entering Sales Data ===" << endl;
    for (int i = 0; i < prac_num; i++) {
        cout << "(" << i+1 << "," << prac_num << ")\n"
                  << "Enter a book ISBN (ex: 0-201-78345-X): ";
        cin >> sds[i].bookNo;
        cout << "\nEnter the number of copies sold: ";
        cin >> sds[i].units_sold;
        cout << "\nEnter the per-copy sale price: ";
        double sp = 0;
        cin >> sp;
        sds[i].revenue = sp * sds[i].units_sold;
        cout << endl;
    }
    cout << "\n\n=== Sales Data Readout ===" 
              << "\n[ISBN] [number of copies sold] [total revenue] [avg sale price]" 
              << endl;
    for (int i = 0; i < prac_num; i++) {
        printSD(sds[i]);
    }



    // Exercise 1.21: Write a program that reads two Sales_item objects that have 
    //      the same ISBN and produces their sum.
    // Exercise 1.22: Write a program that reads several transactions for the same
    //      ISBN. Write the sum of all the transactions that were read.
    Sales_data sds_grpd [prac_num];
    cout << "\nCompiled data:" << endl;
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
    string bookNos [prac_num];
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
    cout << "\nIn the transactions," << endl;
    for (int ge = 0; ge < prac_num; ge++) {
        if (bookNos[ge] != "")
            cout << "  " << bookNos[ge] << "   occurs   "
                      << bookNoCounts[ge] << "   times."
                      << endl;
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



    // Exercises Section 1.4.1
    // Exercise 1.9: Write a program that uses a while to sum the numbers from
    //      50 to 100.
    int cnt = 50, sum = 0;
    while (cnt <= 100) {
        sum += cnt++;
    }
    cout << "\nTotal of sum(50,100): " << sum << endl;

    // Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, 
    //      there is a decrement operator (--) that subtracts 1. Use the decrement
    //      operator to write a while that prints the numbers from ten down to zero.
    cnt = 10;
    while (cnt >= 0) cout << cnt-- << " ";
    cout << endl;

    // Exercise 1.11: Write a program that prompts the user for two integers.
    //      Print each number in the range specified by those two integers.
    cout << "Enter two integers: ";
    cin >> cnt >> sum; cout << endl;
    if (cnt < sum) for (int i = cnt; i <= sum; i++) cout << i << " ";
    if (cnt >= sum) for (int i = cnt; i > sum; i--) cout << i << " ";

    cout << endl; return 0;
}