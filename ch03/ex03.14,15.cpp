// Exercise 3.14: Write a program to read a sequence of ints from cin and
//      store those values in a vector.
// Exercise 3.15: Repeat the previous program but read strings this time.

#include <iostream>
#include <vector>
using std::vector;
using std::string;

int main(){
    std::cout << "Gimme some ints!" << std::endl;
    int i = 0, max = 10, userInt;
    vector<int> vi;
    while (i<max && std::cin >> userInt) {
        vi.push_back(userInt);
        i++;
    }

    std::cout << "Gimme some strings!" << std::endl;
    string userString;
    vector<string> vs;
    i = 0;
    while (i<max && std::cin >> userString) {
        vs.push_back(userString);
        i++;
    }

    return 0;
}