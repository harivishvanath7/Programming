#include <iostream>

// PASS BY VALUE

void printValues(int x, int y) // parameters - x,y
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int main()
{
    printValues(6, 7); // arguments - 6,7

    return 0;
}

// NOTE:-  no of arguments = no of function parameters