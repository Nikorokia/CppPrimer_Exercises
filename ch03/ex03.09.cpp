#include <iostream>

int main() {

    // Exercise 3.9: What does the following program do? Is it valid? If not, why not?
    std::string s;
    std::cout << s[0] << std::endl;

    // this code is invalid and produces an undefined result.
    // accessing an uninitialized string via substring is undefined.

    return 0;
}

// running the above code compiles succesfully produces only a blank line.
// however, that result may not be true for all machines.