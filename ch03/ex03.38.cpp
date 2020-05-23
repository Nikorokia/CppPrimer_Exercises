// Exercise 3.38: In this section, we noted that it was not only illegal but
// meaningless to try to add two pointers.
// Why would adding two pointers be meaningless?

// Answer:
// Pointers are simply containers for memory addresses of the objects to which they point.
// These addresses are machine-specific and likely to change on every run.
// Like trying to add home addresses, adding pointers doesn't make sense.
// Even adding them as simple numbers will likely result in an address outside the program
//      memory space.

#include <iostream>
int main() {
    int a = 42, b = 64, *pa = &a, *pb = &b;
    std::cout << "Address 1: " << pa << "\n"
              << "Address 2: " << pb
              << std::endl;
}