// Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
//     using iterators instead of subscripts.

// // original program
// // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
// vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
// unsigned grade;
// while (cin >> grade) {       // read the grades
//      if (grade <= 100)       // handle only valid grades
//          ++scores[grade/10]; // increment the counter for the current cluster
// }

#include <iostream>
#include <vector>

int main() {
    unsigned grade, buckets = 11, gradeMax = 100;
    std::vector<unsigned> scores(buckets, 0); // 11 buckets, all initially 0
    while (std::cin >> grade) {       // read the grades
        if (grade <= gradeMax)       // handle only valid grades
            for (auto b = scores.begin(), e = scores.end();
                 b!=e;
                 b++)
                    // increment the counter if the current cluster is correct
                    if( buckets-(e-b) == (grade/10) ) (*b)++;
    }

    for (auto i : scores) std::cout << i << " ";
    std::cout << std::endl;
}

// Test input:
//      42 65 95 100 39 67 95 76 88 76 83 92 76 93
// Should print:
//      0 0 0 1 1 0 2 3 2 4 1