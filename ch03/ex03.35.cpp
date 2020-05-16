// Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.

#include <iostream>

int main() {
    constexpr size_t a_size = 5;
    int a[a_size] = { 5, 5, 5, 5, 5 };

    for (auto i : a) std::cout << i << " ";
    std::cout << std::endl;

    auto *p = a;
    auto *p_end = (a+a_size);
    for (p; p != p_end; p++) *p = 0;

    for (auto i : a) std::cout << i << " ";
    std::cout << std::endl;
}