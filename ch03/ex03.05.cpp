// Exercise 3.5: Write a program to read strings from the standard input,
//     concatenating what is read into one large string.
//     Print the concatenated string.
//     Next, change the program to separate adjacent input strings by a space.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int wrds = 5, cnt = 1;
    string input, total = "";
    cout << "Gimme some input!\n";
    while (cnt <= wrds && cin >> input) {
        total += input + " ";
        cnt++;
    } cout << endl;
    cout << "Wow! You typed,\n" << total << endl;
    return 0;
}