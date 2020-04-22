// Exercise 1.17: What happens in the program presented in this section if the
// input values are all equal? What if there are no duplicated values?
// Exercise 1.18: Compile and run the program from this section giving it only
// equal values as input. Run it again giving it values in which no number is
// repeated.

#include <iostream>
int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}

// Input: 42 42 42 42 42 42 42
// Output: 42 occurs 7 times

//Input: 1 2 3 4 5 6 7 8 9
// Output:
// 1 occurs 1 times
// 2 occurs 1 times
// 3 occurs 1 times
// 4 occurs 1 times
// 5 occurs 1 times
// 6 occurs 1 times
// 7 occurs 1 times
// 8 occurs 1 times

// Something funky is going on there with the missing 9.