// Exercise 3.34: Given that p1 and p2 point to elements in the same array, 
// what does the following code do? 
// Are there values of p1 or p2 that make this code illegal?

#include <iostream>

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    auto p1 = a;
    auto p2 = &a[2];

    // Code in question
    p1 += p2 - p1;
    // This code adds the difference of pointers 1 and 2 to pointer 1,
    //      effectively moving p1 the distance in the array of the difference
    //      of p1 and p2.

    // This code is legal as long as the result doesn't put p1 before the beginning
    //      or after the end of the array.

}