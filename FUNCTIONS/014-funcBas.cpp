#include <iostream> 

void doPrint()   // Function Definition
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";

    doPrint();    // Function Call

    std::cout << "Ending main()\n"; 

    return 0;
}