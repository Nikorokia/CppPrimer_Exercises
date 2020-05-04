// Exercise 3.3: Explain how whitespace characters are handled in the string
// input operator and in the getline function.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    cout << "\nIn the string input operator (>>),"
         << "\n  whitespace characters are handled as delimiters."
         << "\nEnter some text:"
         << endl;
    int i = 0;
    string input;
    while (cin >> input && i<5) {
        cout << input << "+";
        i++;
    } cout << "etc." << endl;

    cout << "\nIn the getline() function,"
         << "\n  whitespace characters are handled as part of the string,"
         << "\n  and delimited by the new line character."
         << "\nEnter some text:"
         << endl;
    i = 0;
    while (getline(cin, input) && i < 2) {
        cout << input << endl;
        i++;
    } cout << "etc." << endl;

return 0; }