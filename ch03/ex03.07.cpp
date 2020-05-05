// Exercise 3.7: What would happen if you define the loop control variable
//      in the previous exercise as type char? Predict the results and then
//      change your program to use a char to see if you were right.

// Prediction:
//      changing `auto` to `char` won't have any effect, as `c` is a char.

#include <iostream>

int main() {
    std::cout << "Gimme a string: ";
    std::string s;
    if (!(std::cin >> s)) {
        std::cout << "...nothing." << std::endl;
        return -1;
    }
    for (char &c : s)
        c = 'X';
    std::cout << "Your beautiful new string: "
              << s << std::endl;
}

// Results:
// g++ ex03.07.cpp && ./a.out
// ex03.07.cpp:17:18: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
//     for (char &c : s)
//                  ^
// 1 warning generated.
// Gimme a string: florp
// Your beautiful new string: XXXXX

// Analysis: one less warning (good).