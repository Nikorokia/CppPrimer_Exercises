// Exercise 3.17: Read a sequence of words from cin and store the values a vector. 
//     After you’ve read all the words, process the vector and change each word 
//     to uppercase. Print the transformed elements, eight words to a line.

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    int maxWords, inc = 0;
    string word;
    vector<string> words;
    cout << "How many words? ";
    if (!(cin >> maxWords)) return -1;

    cout << "\nEnter the words!" << endl;
    while (inc < maxWords && cin >> word) {
        words.push_back(word);
        inc++;
    }

    for (auto &w : words)
        for (auto &c : w)
            c = toupper(c);
    
    cout << "\nTransformed words:" << endl;
    inc = 0;
    for (auto w : words) {
        cout << w + " ";
        inc++;
        if (inc >= 8) {
            cout << endl;
            inc = 0;
        }
    }
    cout << endl;
}