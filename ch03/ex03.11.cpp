#include <iostream>
using std::string;

int main() {

    // Exercise 3.11: Is the following range for legal?
    //      If so, what is the type of c?
    const string s = "Keep out!";
    for (auto &c : s) { /*... */ }

    // The above range is legal; `c` is a reference to a char,
    //      the next char in `s` as the range iterates.

    return 0;
}