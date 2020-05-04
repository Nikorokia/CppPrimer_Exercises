// Exercise 3.4: Write a program to read two strings
//     and report whether the strings are equal.
//     If not, report which of the two is larger.
//     Now, change the program to report whether
//     the strings have the same length,
//     and if not, report which is longer.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Gimme two strings:" << endl;
    string s1, s2;
    if (cin >> s1 >> s2) {
        if (s1==s2)
            cout << "They're the same!" << endl;
        else if (s1.size() == s2.size())
            cout << "They're the same length!" << endl;
        else if (s1.size() > s2.size())
            cout << "'" << s1 << "' is longer!" << endl;
        else  if (s1.size() < s2.size())
            cout << "'" << s2 << "' is longer!" << endl;
        else
            cout << "'" << s1 << "', '" << s2 << "';"
                 << " what are these?!" << endl;
    }
    else
        cout << "I said, 'two strings'!" << endl;
    return 0;
}