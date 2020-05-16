// Exercise 3.28: What are the values in the following arrays?

#include <iostream>
using std::string;
using std::cout;
using std::endl;

string sa[10];
//initialized to default values, all zeroes

int ia[10];
//initialized to default values, all empty strings.

int main() {
    string sa2[10]; 
    //values are uninitialized inside a function?
    //apparently wrong as of c++14, initialized to empty string?

    int ia2[10];
    //values are uninitialized inside a function.
    //calling value returns garbage data.

    cout << sa[0] << endl;
    cout << ia[0] << endl;
    cout << sa2[0] << endl;
    cout << ia2[0] << endl;
    cout << INT_MIN << ", " << INT_MAX << endl;
}

// g++ ex03.28.cpp -std=c++14 && ./a.out 