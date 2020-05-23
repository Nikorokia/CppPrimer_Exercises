// Exercise 3.39: Write a program to compare two strings.
// Now write a program to compare the values of two C-style character strings.

#include <iostream>
int main() {
    std::string s1 = "string_a", s2 = "string_b";
    std::cout << s1 << " == " << s2 << ": ";
    if(s1==s2) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;

    char ca1[] = {'s', 't', 'r', 'i', 'n', 'g', '_', 'a', '\0'};
    char ca2[] = {'s', 't', 'r', 'i', 'n', 'g', '_', 'b', '\0'};
    std::cout << "ca1 vs ca2 : " << strcmp(ca1,ca2) << std::endl;
}