#include <iostream>
int main() {
    int i = 0, &r = i;
    auto a = r;   // a is an int (r is an alias for i, which has type int)
    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int (top-level const  in ci is dropped)
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top level)
    auto d = &i;  // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    auto &g = ci; // g is a const int& that is bound to ci
    const auto &j = 42; // we can bind a const reference to a literal

    std::cout <<    "i = " << i
              << ",\na = " << a << ", b = " << b << ", c = " << c
              << ",\nd = " << d << ", e = " << e << ", g = " << g
              << std::endl;

    // Exercise 2.33: Using the variable definitions from this section, 
    //      determine what happens in each of these assignments:
    a = 42;
    // a is an int that can be easily reassigned.
    b = 42;
    // b is an int that can be easily reassigned.
    c = 42;
    // c is an int that can be easily reassigned.
    d = 42;
    // d is a pointer to i. In order to change i, d must be dereferenced as `*d = i;`.
    e = 42;
    // e is a top-level const pointer to const int ci, neither of which can be rebound.
    g = 42;
    // g is a top-level const ref to const int ci, neither of which can be rebound.


    // Exercise 2.34: Write a program containing the variables and assignments
    //  from the previous exercise. Print the variables before and after the
    //  assignments to check whether your predictions in the previous exercise were
    //  correct.

    std::cout <<    "i = " << i
              << ",\na = " << a << ", b = " << b << ", c = " << c
              << ",\nd = " << d << ", e = " << e << ", g = " << g
              << std::endl;

    // Output, without warnings:
    // > g++ ex02.33,34.cpp
    // ex02.33,34.cpp:26:9: error: assigning to 'int *' from incompatible type 'int'
    //     d = 42;
    //         ^~
    // ex02.33,34.cpp:28:9: error: assigning to 'const int *' from incompatible type 'int'
    //     e = 42;
    //         ^~
    // ex02.33,34.cpp:30:7: error: cannot assign to variable 'g' with const-qualified type 'const int &'
    //     g = 42;
    //     ~ ^
    // ex02.33,34.cpp:10:11: note: variable 'g' declared const here
    //     auto &g = ci; // g is a const int& that is bound to ci
    //     ~~~~~~^~~~~~
    // 7 warnings and 3 errors generated.
}