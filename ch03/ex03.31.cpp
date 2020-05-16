// Exercise 3.31: Write a program to define an array of ten ints. Give each
// element the same value as its position in the array.

#include <iostream>

int main() {

    int ia1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto i : ia1) std::cout << i << " ";
    std::cout << std::endl;;

}