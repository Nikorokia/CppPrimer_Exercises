// Exercise 3.33: What would happen if we did not initialize the scores array
// in the program on page 116?

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

    //program on page 16

    // count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
    unsigned scores[11] = {}; // 11 buckets, all value initialized to 0

    //added code to print garbage
    unsigned scores2[11];
    cout << "Initial values in Scores2: ";
    for (auto i : scores2) cout << i << " ";
    cout << endl;

    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++scores[grade/10]; // increment the counter for the current cluster
    }
    for (auto i : scores) // for each counter in scores
        cout << i << " "; // print the value of that counter
    cout << endl;

}

// Since scores is defined in a function, its values are not default-initialized
//      and so initially contain garbage, as shown by the contents of `scores2`
//      (note, output may vary per machine and with every run):

// Sample Output:
// $ g++ ex03.33.cpp -std=c++14 && ./a.out
// Initial values in Scores2: 0 0 0 0 0 0 0 0 3965065968 32766 3965065944 
// ^C