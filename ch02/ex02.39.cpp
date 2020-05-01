//Exercise 2.39: Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.

struct Foo { /* empty */ } // Note: no semicolon

int main()
{ 
    return 0;
}

// Ouput:
// > g++ ex02.39.cpp 
// ex02.39.cpp:3:27: error: expected ';' after struct
// struct Foo { /* empty */ } // Note: no semicolon
//                           ^
//                           ;
// 1 error generated.