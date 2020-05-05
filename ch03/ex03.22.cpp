// Exercise 3.22: Revise the loop that printed the first paragraph in text
//      to instead change the elements in text that correspond to the first
//      paragraph to all uppercase. After you’ve updated text, print its contents.

#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;

int main() {
    std::vector<string> text;
    text.push_back("This is a string with blank spaces included.");
    text.push_back("Empty strings denote paragraphs.");
    text.push_back("");
    text.push_back("It's too bad that my included compiler makes me build vectors this way.");
    text.push_back("");
    text.push_back("This is the last line of the text.");

    for (auto it = text.begin();
         it != text.end() && !it->empty();
         ++it)
            for (auto e = (*it).begin();
                 e != it->end();
                 e++)
                    *e = toupper(*e);
    
    cout << endl;
    for (auto e = text.cbegin();
         e != text.cend();
         e++) {
             if ( e->empty() ) cout << "\n\n";
             else cout << *e << " ";
    }
    cout << endl << endl;

    return 0;
}