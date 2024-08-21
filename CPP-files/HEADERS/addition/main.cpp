#include <iostream>

#include "add.h"

int main()
{
    std::cout << "The Sum of 3 & 4 : " << add(3,4) << "\n";
    return 0;
}

// g++ main.cpp add.cpp add.h -o file
// file.exe