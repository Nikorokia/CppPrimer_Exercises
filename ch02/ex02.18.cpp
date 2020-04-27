// Exercise 2.18: Write code to change the value of a pointer. Write code to
// change the value to which the pointer points.

#include <iostream>
int main() {
    std::cout << std::endl;
    int x = 0, y = 42;

    //declare pointers
    int *pt_a = nullptr;
    int *pt_b = nullptr;

    //assign pointers
    pt_a = &x;
    pt_b = &y;

    //output
    std::cout << "x = " << x << ", y = " << y
              << "\npt_a val: " << *pt_a << ", addr: " << pt_a << ", pt_addr: " << &pt_a
              << "\npt_b val: " << *pt_b << ", addr: " << pt_b << ", pt_addr: " << &pt_b
              << std::endl << std::endl;

    //change values
    *pt_a = y;  // x = y, 42
    *pt_b = 111; // y = 111

    //output
    std::cout << "x = " << x << ", y = " << y
              << "\npt_a val: " << *pt_a << ", addr: " << pt_a << ", pt_addr: " << &pt_a
              << "\npt_b val: " << *pt_b << ", addr: " << pt_b << ", pt_addr: " << &pt_b
              << std::endl << std::endl;

    //change addresses
    pt_a = pt_b;
    pt_b = &x;

    //output
    std::cout << "x = " << x << ", y = " << y
              << "\npt_a val: " << *pt_a << ", addr: " << pt_a << ", pt_addr: " << &pt_a
              << "\npt_b val: " << *pt_b << ", addr: " << pt_b << ", pt_addr: " << &pt_b
              << std::endl << std::endl;
}