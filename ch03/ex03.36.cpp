// Exercise 3.36: Write a program to compare two arrays for equality.
// Write a similar program to compare two vectors.

#include <iostream>
#include <array>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::end;


string transBool(bool v) {
    if (v) return "true";
    else return "false";
}

int main() {
    // arrays
    int a1[] = {5, 5, 5, 5, 5};
    int a2[] = {5, 5, 5, 5, 4};

    // compare arrays
    bool equal = true;

    if ( (end(a1) - a1) != (end(a2) - a2) )
        equal = false;
    else
        for(auto *pa = a1, *pb = a2; 
            pa != end(a1) && pb != end(a2);
            pa++, pb++)
                if (*pa != *pb)
                    equal = false;

    cout << "[ ";
    for (auto e : a1) cout << e << " ";
    cout << "] equals [ ";
    for (auto e : a2) cout << e << " ";
    cout << "]: " << transBool(equal) << endl;


    // vectors
    std::vector<int> v1 = {5, 5, 5, 5, 5};
    std::vector<int> v2 = {5, 5, 5, 5, 4};

    // comparing vectors
    equal = true;
    if (v1.size() != v2.size()) equal = false;
    for (auto i1 = v1.begin(), i2 = v2.begin();
         i1 != v1.end() && i2 != v2.end();
         i1++, i2++)
            if (*i1 != *i2)
                equal = false;

    cout << "{ ";
    for (auto e : v1) cout << e << " ";
    cout << "} equals { ";
    for (auto e : v2) cout << e << " ";
    cout << "}: " << transBool(equal) << endl;
}