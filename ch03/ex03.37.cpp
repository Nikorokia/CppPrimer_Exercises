// Exercise 3.37: What does the following program do?

#include <iostream>
using std::cout;
using std::endl;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};    //creates a char array
    const char *cp = ca;                            //defines pointer for first element
    while (*cp) {                                   //loops while pointer is valid
        cout << *cp << endl;                        //  prints char at current pointer
        ++cp;                                       //  increments pointer
    }
}