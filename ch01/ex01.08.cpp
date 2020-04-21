// Exercise 1.8: Indicate which, if any, of the following output statements are
// legal:
// std::cout << "/*";
// std::cout << "*/";
// std::cout << /* "*/" */;
// std::cout << /* "*/" /* "/*" */;
// After you’ve predicted what will happen, test your answers by compiling a
// program with each of these statements. Correct any errors you encounter.

#include <iostream>
int main() {

//Are any of these legal?

std::cout << "/*";
//prediction: yes.

std::cout << "*/";
//prediction: yes.

//std::cout << /* "*/" */;
//prediction: no. cout receives unknown value. 
//hehe. lots of errors. :)
//corrected:
  std::cout << /* "*/" */";

std::cout << /*   "*/"  /*  "/*"   */;
//prediction: yes. first " is commented, next two create "/*", last " is commented:
//std::cout <<   /* " */     "/*"     /* " */;


std::cout<<std::endl;return 0;}