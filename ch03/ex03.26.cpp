// Exercise 3.26: In the binary search program on page 112,
//     why did we write
//         `mid=beg+(end-beg)/2;`
//     instead of
//         `mid=(beg+end)/2;`
//     ?

#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> text;
    text.push_back("a"); text.push_back("b"); text.push_back("c");
    text.push_back("d"); text.push_back("e"); text.push_back("f");

    std::string sought = "e";

    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;
    while (mid != end && *mid != sought) {
        if (sought < *mid)  end = mid;
        else                beg = mid + 1;
        mid = beg + (end - beg)/2;
    }

    return 0;
}

// Answer:
//
// `(beg+end)/2` results in a type long (on my compiler),
//      which would make mid of type long instead of an iterator.
// Adding beg in `beg+(end-beg)/2;` turns it back into an iterator.
//
// Additionally, end should always be bigger than beginning
//      allowing for subtraction.
// And if beg==end, then even if `(beg+end)/2` were an iterator
//      it would be an undefined location, since end is one past the
//      last element in the container.