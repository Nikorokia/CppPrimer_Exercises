// Exercise 3.18: Is the following program legal?
//     If not, how might you fix it?

#include <iostream>
#include <vector>
using std::vector;

int main() {

    vector<int> ivec;
    //ivec[0] = 42;
    // this is not legal, because substrings don't add values to vectors.
    // this is easily fixed by using the push_back method.
    ivec.push_back(42);

    return 0;
}