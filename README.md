# C++ Primer Exercises
My creations while reading through the book, _C++ Primer, 5th Edition (2012)_.

I embarked on this journey primarily to learn **C++**, but with the added benefit of forcing myself to work through critical thinking challenges.  

As a bonus, I get to learn more about git!

##### Bookmark
```
Currently: pg64, 2.1.2

Chapters Complete: 1
```

## Quick Reference Notes

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