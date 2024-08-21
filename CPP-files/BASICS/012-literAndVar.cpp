// A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code.

/* Literals and variables both have a value (and a type). Unlike a variable 
   (whose value can be set and changed through initialization and assignment respectively), 
   the value of a literal is fixed (5 is always 5). This is why literals are called constants.
*/

// To further highlight the difference between literals and variables, let’s examine this short program:

#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // print the value of a literal

    int x { 5 };
    std::cout << x << '\n'; // print the value of a variable
    return 0;
}