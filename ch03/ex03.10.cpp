// Exercise 3.10: Write a program that reads a string of characters
//     including punctuation and writes what was read
//     but with the punctuation removed.

#include <iostream>

int main() {
    std::cout << "\nGimme a fancy sentence!" << std::endl;
    std::string input, output;
    if (!(getline(std::cin,input))) {
        std::cout << "Tasteless. I need content." << std::endl;
        return -1;
    }
    for (auto c : input) {
        if (!ispunct(c)) output += c;
    }

    std::cout << "\n...you didn't want it to be fancy, right?\n"
              << output << std::endl;
    return 0;
}