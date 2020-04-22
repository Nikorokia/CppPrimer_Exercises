// Exercise 1.15: Write programs that contain the common errors discussed in
// the box on page 16. Familiarize yourself with the messages the compiler
// generates.

// Errors discussed:
//     Using a colon instead of a colon to end a statement.
//     Missing quotes around a string.
//     Missing an operator
//     Type errors: example, trying to use a string as an int.
//     Declaration errors: example, using a variable without declaring it.

// Sample code from the box:

#include <iostream>
int main ( {
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;


    int v1 = 0, v2 = 0;
    std::cin >> v >> v2; // error: uses "v" not "v1"
    // error: cout not defined; should be std::cout
    cout << v1 + v2 << std::endl;

    // error: missing ; on return statement
    return 0
}

// Attempting to compile this program produces this output:
// $ g++ ex01.15.cpp 
// ex01.15.cpp:8:10: error: cannot declare ‘::main’ to be a global variable
//  int main ( {
//           ^
// ex01.15.cpp:10:48: error: found ‘:’ in nested-name-specifier, expected ‘::’
//      std::cout << "Read each file." << std::endl:
//                                                 ^
// ex01.15.cpp:10:44: error: ‘std::endl’ is not a class, namespace, or enumeration
//      std::cout << "Read each file." << std::endl:
//                                             ^~~~
// ex01.15.cpp:12:18: error: ‘Update’ was not declared in this scope
//      std::cout << Update master. << std::endl;
//                   ^~~~~~
// ex01.15.cpp:12:18: note: suggested alternative: ‘getdate’
//      std::cout << Update master. << std::endl;
//                   ^~~~~~
//                   getdate
// ex01.15.cpp:12:25: error: expected ‘}’ before ‘master’
//      std::cout << Update master. << std::endl;
//                          ^~~~~~
// ex01.15.cpp:12:25: error: expected ‘)’ before ‘master’
// ex01.15.cpp:14:10: error: ‘cout’ in namespace ‘std’ does not name a type
//      std::cout << "Write new master." std::endl;
//           ^~~~
// In file included from ex01.15.cpp:7:0:
// /usr/include/c++/7/iostream:61:18: note: ‘std::cout’ declared here
//    extern ostream cout;  /// Linked to standard output
//                   ^~~~
// ex01.15.cpp:18:10: error: ‘cin’ in namespace ‘std’ does not name a type
//      std::cin >> v >> v2; // error: uses "v" not "v1"
//           ^~~
// In file included from ex01.15.cpp:7:0:
// /usr/include/c++/7/iostream:60:18: note: ‘std::cin’ declared here
//    extern istream cin;  /// Linked to standard input
//                   ^~~
// ex01.15.cpp:20:5: error: ‘cout’ does not name a type
//      cout << v1 + v2 << std::endl;
//      ^~~~
// ex01.15.cpp:23:5: error: expected unqualified-id before ‘return’
//      return 0
//      ^~~~~~
// ex01.15.cpp:24:1: error: expected declaration before ‘}’ token
//  }
//  ^