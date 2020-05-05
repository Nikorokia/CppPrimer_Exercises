// Exercise 3.23: Write a program to create a vector with ten int elements.
//     Using an iterator, assign each element a value that is twice its
//     current value. Test your program by printing the vector.

#include <iostream>
#include <vector>

void printIVec(std::vector<int> v) {
    std::cout << "\n{ ";
    for (auto e = v.begin(); e != v.end(); e++)
        std::cout << *e << " ";
    std::cout << "}" << std::endl;
}

int main() {
    std::vector<int> v;

    for (int i = 1; i != 11; i++)
        v.push_back(i);

    printIVec(v);

    for (auto e = v.begin(); e != v.end(); e++)
        *e *= 2;

    printIVec(v);

    std::cout << std::endl;
    return 0;    
}