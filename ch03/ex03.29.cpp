// Exercise 3.29: List some of the drawbacks of using an array instead of a vector.

// Arrays are fixed size, and this size must be known at compile time.

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main() {
    int is[5] = {1,2,3,4,5};
    for (int i : is) cout << i << " ";

    cout << ", ";
    vector<int> vs = {1,2,3,4,5};
    vs.push_back(6);
    for (int v : vs) cout << v << " ";

    cout << endl;
}

// Output:
// >> g++ ex03.29.cpp -std=c++14 && ./a.out                   
// 1 2 3 4 5 1 2 3 4 5 