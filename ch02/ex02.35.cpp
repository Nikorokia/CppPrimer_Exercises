#include <iostream>
int main() {
    // Exercise 2.35: Determine the types deduced in the following
    //  definitions. Once you've figured out the types, write a program to see
    //  whether you were correct.
    
    const int i = 42;           // i is const int
    auto j = i;                 // j is int
    const auto &k = i;          // k is low-level const ref to int i
    auto *p = &i;               // p is pointer to int i
    const auto j2 = i, &k2 = i; // j2 is const int, k2 is low-level const ref to int i

    // Check:
    i = 64;                     // unable to reassign const int
    j = 64;                     // j can be reassigned
    k = 64;                     // unable to reassign via const ref
    *p = 64;                    // unable to reassign const int
    p = &j;                     // p can be reassigned
    j2 = 64;                    // unable to reassign const int
    k2 = 64;                    // unable to reassign via const ref

    std::cout <<    "i  = " << i  << ", j  = " << j << ", k = " << k
              << ",\np* = " << *p << ", p  = " << p
              << ",\nj2 = " << j2 << ", k2 = " << k2 << std::endl;

    // Output, without warnings:
    // > g++ ex02.35.cpp
    // ex02.35.cpp:14:7: error: cannot assign to variable 'i' with const-qualified type 'const int'
    //     i = 64;                     // unable to reassign const int
    //     ~ ^
    // ex02.35.cpp:7:15: note: variable 'i' declared const here
    //     const int i = 42;           // i is const int
    //     ~~~~~~~~~~^~~~~~
    // ex02.35.cpp:16:7: error: cannot assign to variable 'k' with const-qualified type 'const int &'
    //     k = 64;                     // unable to reassign via const ref
    //     ~ ^
    // ex02.35.cpp:9:17: note: variable 'k' declared const here
    //     const auto &k = i;          // k is low-level const ref to int i
    //     ~~~~~~~~~~~~^~~~~
    // ex02.35.cpp:17:8: error: read-only variable is not assignable
    //     *p = 64;                    // unable to reassign const int
    //     ~~ ^
    // ex02.35.cpp:19:8: error: cannot assign to variable 'j2' with const-qualified type 'const int'
    //     j2 = 64;                    // unable to reassign const int
    //     ~~ ^
    // ex02.35.cpp:11:16: note: variable 'j2' declared const here
    //     const auto j2 = i, &k2 = i; // j2 is const int, k2 is low-level const ref to int i
    //     ~~~~~~~~~~~^~~~~~
    // ex02.35.cpp:20:8: error: cannot assign to variable 'k2' with const-qualified type 'const int &'
    //     k2 = 64;                    // unable to reassign via const ref
    //     ~~ ^
    // ex02.35.cpp:11:25: note: variable 'k2' declared const here
    //     const auto j2 = i, &k2 = i; // j2 is const int, k2 is low-level const ref to int i
    //     ~~~~~~~~~~~~~~~~~~~~^~~~~~
    // 4 warnings and 5 errors generated.
}