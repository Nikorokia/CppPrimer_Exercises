// Exercise 2.3: What output will the following code produce?
// Exercise 2.4: Write a program to check whether your predictions were
// correct. If not, study this section until you understand what the problem is.
#include <iostream>
int main() {
    
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    //prediction: 32
    std::cout << u - u2 << std::endl;
    //prediction: (max uint) 4294967296 - 32 = 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    //prediction: 32
    std::cout << i - i2 << std::endl;
    //prediction: -32

    std::cout << i - u << std::endl;
    //predicion: 
    //   0b10000000000000000000000000001010 (10, int to uint)
    // - 0b00000000000000000000000000001010 (10, uint)
    // = 0b10000000000000000000000000000000
    // = 2147483648
    std::cout << u - i << std::endl;
    //predicion: 
    //   0b00000000000000000000000000001010
    // - 0b10000000000000000000000000001010
    // = 0b01111111111111111111111111111111
    // = 2147483647

}

// ---Sample Output:---
// $ g++ ex02.03,04.cpp && ./a.out
// 32
// 4294967264
// 32
// -32
// 0
// 0