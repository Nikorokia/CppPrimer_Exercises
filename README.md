# C++ Primer Exercises
My creations while reading through the book, _C++ Primer, 5th Edition (2012)_.

I embarked on this journey primarily to learn **C++**, but with the added benefit of forcing myself to work through critical thinking challenges.  

As a bonus, I get to learn more about git!  
(This inlcudes correctly setting my credentials; apparently, they weren't.)  

##### Bookmark
```
Currently: pg173, Exercise 3.36

Chapters Complete: 1, 2
```

## Quick Reference Notes

_[A helpful formatting FAQ](http://www.stroustrup.com/bs_faq2.html#whitespace) from the Father of C++._

##### Quick Compile

Compiling code on Unix:
```
$ g++ -o prog1 prog1.cpp
```
`-o prog1` is the output file.

Compiling code with Microsoft Visual Studio 2010 compiler:
```
[dir]> cl /EHsc prog1.cpp
```
`/EHsc` turns on standard exception handling.

##### End-of-File Keystroke

Necessary when entering values for `std::cin`.  
On Windows: `Ctrl`+`z`.  
On Unix: `Ctrl`+`d`.  

##### Passing in Input and Output Files

Tired of entering info while testing?  
Specify a file to read in from for iostream, and a file to dump output to!
```
$ prog1 <infile >outfile
```

##### References and Pointers

Reference assignment and use:
``` c++
int i = 42, j = 64;                     //standard integers
int &ref_i = i;                         //reference now an alias for i
ref_i = j;                              //i is now equal to j
std::cout << ref_i << " " << &ref_i;    //prints value of i, then address of i
```

Pointer (re)assignment and use:  
``` c++
int i = 0, j = 42;
int *pt_a = &i;         //  star in declaration: pointer contains address of i
*pt_a = j;              //  star to dereference: i now equals j (73)
pt_a = &j;              //  no star to re-assign: pointer contains new address
std::cout << pt_a;      //  no star to reference: prints address of j

int *pt_c = nullptr;    //  initialize to type's default value
int *pt_d = 0;          //  ----ALWAYS initialize pointers!----

void *pt_e = j;         //  pointer that can hold address of any type,
                        //      but type is unknown
```
Except in declaration, **Star** for **value**, _no star_ for _reference_.  

##### Constants
``` c++
int i = 0;
const int j = 42;
const int *pt_a = j;    //  low-level constant pointer: 
                        //      address value can change
                        //      can only point to const ints

int *const pt_b = i;    //  top-level constant pointer:
                        //      address value is permanant
                        //      bound integer can change

const int *const pt_c = j   //  pointer is both top-level and low-level constant
```
Low-level const pointers must be used for const objects,  
but can be used for non-const objects.