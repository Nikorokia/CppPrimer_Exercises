// Exercise 3.2: Write a program to read the standard input a line at a time.
//      Modify your program to read a word at a time.

#include <iostream>
// #include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "Give some input:" << endl;
    string inputText, workingText;
    // while (getline(cin, inputText)) {
    //     cout << inputText << endl;
    // }
    cout << "\nNow try with words:" << endl;
    while (cin >> inputText) {
        cout << inputText << endl;
    }
    return 0;
}