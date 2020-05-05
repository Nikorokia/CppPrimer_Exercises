// Exercise 3.8: Rewrite the program in the first exercise, 
//      first using a while and again using a traditional for loop.
//      Which of the three approaches do you prefer and why?

#include <iostream>

int main() {
    std::cout << "Gimme a string: ";
    std::string s, ws, fs;
    if (!(std::cin >> s)) {
        std::cout << "...nothing." << std::endl;
        return -1;
    }
    ws = s;
    fs = s;

    //original
    for (char &c : s)
        c = 'X';

    //while
    decltype(ws.size()) w = 0;
    while (ws.size() != 0 && w < ws.size()) {
        ws[w++] = 'X';
    }

    for (decltype(fs.size()) f = 0;
         f < fs.size();
         f++) {
             fs[f] = 'X';
    } 

    std::cout << "Your beautiful new string: " << s << "\n"
              << "Lovingly created with WHILE: " << ws << "\n"
              << "And with Oldie FOR: " << fs << std::endl;
}

// Analysis:
// Range `for` is definitely much cleaner when accessing every letter.
//    Using an iterator such as range `for` doesn't require dirty incrementing.
// Classic `for` is cleaner than `while`, as it contains its own incrementer.
// `while` is better if the incrementing variable already exists.