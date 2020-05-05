// Exercise 3.20: Read a set of integers into a vector.
//     Print the sum of each pair of adjacent elements.
//     Change your program so that it prints the sum of
//     the first and last elements, followed by the sum
//     of the second and second-to- last, and so on.

#include <iostream>
#include <vector>

int main() {
    std::cout << "Gimme some integers:" << std::endl;
    int maxLen = 10, inc = 0, userInt;
    std::vector<int> v, vAs, vEs;
    while (inc < maxLen && std::cin>>userInt) {
        v.push_back(userInt);
        inc++;
    }

    inc = 0;
    for (int i = 0; i < maxLen; i++) {
        if (i%2==0)     vAs.push_back(v[i]);
        else            vAs[inc++]+=v[i];
    }
    for (auto i : vAs) std::cout << i << " ";
    std::cout << std::endl;

    inc = 0;
    for (int i = 0; i < maxLen/2; i++) {
        vEs.push_back(v[i]+v[maxLen-1-i]);
    }
    if(maxLen%2==1) vEs.push_back(v[maxLen/2]);
    for (auto i : vEs) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}