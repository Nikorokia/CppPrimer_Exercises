// Exercise 3.30: Identify the indexing errors in the following code:

#include <vector>

int main() {
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;
}

// `ia` is an array of size 10, but is indexed 0 to 9.
// When the for loop makes `ix` == 10, using it as an index to `ia` will be an error.