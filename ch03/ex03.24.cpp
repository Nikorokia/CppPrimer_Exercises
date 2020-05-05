// Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105)[, 3.20,] using iterators.

// Exercise 3.20: Read a set of integers into a vector.
//     Print the sum of each pair of adjacent elements.
//     Change your program so that it prints the sum of
//     the first and last elements, followed by the sum
//     of the second and second-to- last, and so on.

#include <iostream>
#include <vector>
using std::cout;

int main() {
    std::cout << "Gimme some integers:" << std::endl;
    int maxLen = 10, inc = 0, userInt;
    std::vector<int> v, vAs, vEs;
    while (inc < maxLen && std::cin>>userInt) {
        v.push_back(userInt);
        inc++;
    }
    for (auto i : v) std::cout << i << " ";
    std::cout << std::endl;

    //sum every adjacent pair
    for (auto a = v.begin(), b = a+1;
         a!=v.end() && b!=v.end();
         a+=2, b+=2)
            vAs.push_back((*a)+(*b));
    if(v.size()%2==1) vAs.push_back(*(--v.end())); // if size is odd, add end number
    for (auto i : vAs) std::cout << i << " ";
    std::cout << std::endl;

    //sum first and last, working inward
    for (auto b = v.begin(), e = --(v.end());
         b!=e && b!=e+1;
         b++, e--)
            vEs.push_back((*b)+(*e));
    if(v.size()%2==1) vEs.push_back(v[v.size()/2]); // if size is odd, add mid number
    for (auto i : vEs) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}