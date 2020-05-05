// Exercise 3.12: Which, if any, of the following vector definitions are in error?
//  For those that are legal, explain what the definition does.
//  For those that are not legal, explain why they are illegal.

#include <iostream>
#include <vector>
using std::vector;
using std::string;

int main() {
// (a)
vector<vector<int> > ivec;
//legal initialization of empty vector of ints

// (b) 
// vector<string> svec = ivec;
//illegal, can't copy vector<ints> into strings

// (c) 
vector<string> svec(10, "null");
// legal initialization of strings vector, containing 10 elements, all "null"

return 0;
}