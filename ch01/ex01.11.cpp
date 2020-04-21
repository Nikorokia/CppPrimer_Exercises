// Exercise 1.11: Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers.

#include <iostream>
int main() {
    int x,y,x1,y1 = 0;
    std::cout << "Input two integers:" << std::endl;
    std::cin >> x >> y;
    x1 = x;
    y1 = y;
    std::cout<<std::endl;

    while (x1 <= y) {
        std::cout << x1++ << std::endl;
    }
    while (y1 <= x) {
        std::cout << y1++ << std::endl;
    }
    return 0;
}

//Note: I know about IF statements, but the book doesn't know that yet! ;)

//output:
// $ g++ ex01.11.cpp && ./a.out
// Input two integers:
// 1 10
//
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
//
// $ g++ ex01.11.cpp && ./a.out
// Input two integers:
// 10 1
//
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10