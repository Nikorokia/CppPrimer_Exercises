// Exercise 3.36: Write a program to compare two arrays for equality.
// Write a similar program to compare two vectors.

#include <iostream>
#include <array>

bool arr_equal_chk(int a[], int b[]) {
    int *e = end(a);
}

int main() {
    int a1[5] = {5, 5, 5, 5, 5};
    int a2[5] = {5, 5, 5, 5, 5};
    int a3[5] = {5, 5, 5, 5, 4};
    int a4[4] = {5, 5, 5, 5};

    arr_equal_chk(a1, a2);
}