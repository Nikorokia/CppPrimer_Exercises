// Exercise 3.19: List three ways to define a vector and give it ten elements,
//      each with the value 42. Indicate whether there is a preferred way to do so and why.

#include <iostream>
#include <vector>
using std::vector;

template <typename T>
void printVec(vector<T> v) {
    std::cout << "{ ";
    for (auto e : v) std::cout << e << " ";
    std::cout << "}" << std::endl;
}

int main() {
    // blank init and fill
    vector<int> v1;
    for (int i = 0; i < 10; i++) v1.push_back(42);
    // preferred for any other situation,
    //   for flexibility and optimization.
    printVec(v1);

    // direct init
    vector<int> v2(10, 42);
    // preferred here, because exact number of
    //   elements and values are known.
    printVec(v2);

    // list init
    // vector<int> v3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    // not preferred, since it's part of the new spec
    //   and apparently not supported by my system.
}