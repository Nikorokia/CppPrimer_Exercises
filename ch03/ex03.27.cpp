// Exercise 3.27: Assuming txt_size is a function that takes no arguments
//     and returns an int value, which of the following definitions are illegal?
//     Explain why.

#include <iostream>

constexpr int txt_size() { //g++ doesn't compile without -std=c++14 arg
    return 8;
}

int main() {

    unsigned buf_size = 1024;


    //(a)
    int ia1[buf_size];
    // apparently legal in g++, even though buf_size is not a const or literal.

    //(b) 
    int ia2[4 * 7 - 14]; 
    // legel, the result of the expression is a literal.

    //(c) 
    int ia3[txt_size()];
    // legal only if txt_size is defined as a constexpr.

    //(d) 
    char st[11] = "fundamental";
    // illegal, st doesn't have space to contain the string literal's null character.

}

// Output:

// >> g++ ex03.27.cpp
// ex03.27.cpp:7:1: error: unknown type name 'constexpr'
// constexpr int txt_size() { //g++ doesn't compile without -std=c++14 arg
// ^
// ex03.27.cpp:7:11: error: expected unqualified-id
// constexpr int txt_size() { //g++ doesn't compile without -std=c++14 arg
//           ^
// ex03.27.cpp:25:13: error: use of undeclared identifier 'txt_size'
//     int ia3[txt_size()];
//             ^
// ex03.27.cpp:29:19: error: initializer-string for char array is too long
//     char st[11] = "fundamental";
//                   ^~~~~~~~~~~~~
// 4 errors generated.

// >> g++ ex03.27.cpp -std=c++14           
// ex03.27.cpp:29:19: error: initializer-string for char array is too long
//     char st[11] = "fundamental";
//                   ^~~~~~~~~~~~~
// 1 error generated.