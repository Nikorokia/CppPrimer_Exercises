// Exercise 1.7: Compile a program that has incorrectly nested comments.

int main()
{
    /* Incorrectly nested comment:
     *      /* */
     */
    return 0;
}

// Compiler Produces:
// $ g++ ex01.07.cpp && ./a.out
// ex01.07.cpp: In function ‘int main()’:
// ex01.07.cpp:5:7: error: expected primary-expression before ‘/’ token
//       */
//        ^
// ex01.07.cpp:6:5: error: expected primary-expression before ‘return’
//      return 0;
//      ^~~~~~