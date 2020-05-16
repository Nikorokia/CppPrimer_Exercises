// Exercise 3.32: Copy the array you defined in the previous exercise into
// another array. Rewrite your program to use vectors.

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

void printA(int ia[], size_t arr_size) {
    cout << "Array:  [ ";
    for (size_t i = 0; i < arr_size; i++) cout << ia[i] << " ";
    cout << "]" << endl;
}
void printV(vector<int> iv) {
    cout << "Vector: { ";
    for (auto i : iv) cout << i << " ";
    cout << "}" << endl;
}

int main() {
    constexpr size_t ex_size = 10;

    // From ex03.31.cpp
    int ia1[ex_size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    // Copy into another array
    int ia2[10];
    for (size_t i = 0; i < ex_size; i++) ia2[i] = ia1[i];

    printA(ia1, ex_size);
    printA(ia2, ex_size);

    // Using vectors
    vector<int> iv1;
    for (int i = 0; i < ex_size; i++) iv1.push_back(i);
    vector<int> iv2;
    for (auto i : iv1) iv2.push_back(i);

    printV(iv1);
    printV(iv2);
}

// Ouput:
// $ g++ ex03.32.cpp -std=c++14 && ./a.out
// Array:  [ 0 1 2 3 4 5 6 7 8 9 ]
// Array:  [ 0 1 2 3 4 5 6 7 8 9 ]
// Vector: { 0 1 2 3 4 5 6 7 8 9 }
// Vector: { 0 1 2 3 4 5 6 7 8 9 }