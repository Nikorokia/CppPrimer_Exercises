// Exercise 3.40: Write a program to define two character arrays
// initialized from string literals. Now define a third character
// array to hold the concatenation of the two arrays. Use strcpy
// and strcat to copy the two arrays into the third.

#include <iostream>
int main() {
    std::string s1 = "hello", s2 = "world";
    char ca1[] = "hello", ca2[] = "world";
    char ca3[12];
    strcpy(ca3,ca1);
    strcat(ca3," ");
    strcat(ca3,ca2);

    for (auto c : ca3) std::cout << c;
    std::cout << "\nSize: " << strlen(ca3) << std::endl;
}