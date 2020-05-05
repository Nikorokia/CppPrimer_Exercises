// Exercise 3.6: Use a range for to change all the characters in a string to X.

#include <iostream>

int main() {
    std::cout << "Gimme a string: ";
    std::string s;
    if (!(std::cin >> s)) {
        std::cout << "...nothing." << std::endl;
        return -1;
    }
    for (auto &c : s)
        c = 'X';
    std::cout << "Your beautiful new string: "
              << s << std::endl;
}