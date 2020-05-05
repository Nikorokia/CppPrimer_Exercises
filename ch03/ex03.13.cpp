// Exercise 3.13: How many elements are there in each of the following
// vectors? What are the values of the elements?

#include <iostream>
#include <vector>
using std::string;
using std::vector;

int main() {
//(a)
vector<int> v1;
//no elements, empty vector of ints.

//(b)
vector<int> v2(10);
// ten default-initialized integer values, probably all zero.

//(c)
vector<int> v3(10, 42);
// two integer values, 10 and 42.

//(d)
//vector<int> v4{10};
// one integer value, 10.
// UNCONFIRMED, not supported on my system.

//(e)
//vector<int> v5{10, 42};
// two integer values, 10 and 42.
// UNCONFIRMED, not supported on my system.

//(f)
//vector<string> v6{10};
// ten default-initialized string values, probably empty strings.
// UNCONFIRMED, not supported on my system.

//(g)
//vector<string> v7{10, "hi"};
// ten string values, all "hi".
// UNCONFIRMED, not supported on my system.

return 0;
}