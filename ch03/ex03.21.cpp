// Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105)[, exercise 3.16,] using iterators.

// Exercise 3.16: Write a program to print the size and contents of the vectors
//     from exercise 3.13. Check whether your answers to that exercise were correct.
//     If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.

// Exercise 3.13: How many elements are there in each of the following
//      vectors? What are the values of the elements?

#include <iostream>
#include <vector>
using std::string;
using std::vector;

template <typename T>

void printVec(vector<T> v) {
    std::cout << "Size: " << v.size() << ", with\n    { ";
    for (auto e = v.cbegin();
         e != v.cend();
         e++)
            std::cout << *e << ", ";
    std::cout << "}" << std::endl;
}

int main() {
    //(a)
    vector<int> v1;
    //no elements, empty vector of ints.
    printVec(v1);

    //(b)
    vector<int> v2(10);
    // ten default-initialized integer values, probably all zero.
    printVec(v2);

    //(c)
    vector<int> v3(10, 42);
    // ten integer values, all 42.
    printVec(v3);

    //(d) original:
    //vector<int> v4{10};
    // one integer value, 10.
    // UNCONFIRMED, not supported on my system.
    vector<int> v4(1, 10);
    printVec(v4);

    //(e) original:
    //vector<int> v5{10, 42};
    // two integer values, 10 and 42.
    // UNCONFIRMED, not supported on my system.
    vector<int> v5;
    v5.push_back(10);
    v5.push_back(42);
    printVec(v5);

    //(f) original:
    //vector<string> v6{10};
    // ten default-initialized string values, probably empty strings.
    // UNCONFIRMED, not supported on my system.
    vector<string> v6(10);
    printVec(v6);

    //(g) original:
    //vector<string> v7{10, "hi"};
    // ten string values, all "hi".
    // UNCONFIRMED, not supported on my system.
    vector<string> v7(10, "hi");
    printVec(v7);

    return 0;
}