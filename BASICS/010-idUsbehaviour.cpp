// Implementation-defined behavior 

// Implementation-defined behavior means the behavior of some syntax is left up to the implementation (the compiler) to define. 
// Such behaviors must be consistent and documented, but different compilers may produce different results.

// Let’s look at a simple example of implementation-defined behavior:

#include <iostream>

int main()
{
	std::cout << sizeof(int); // print how many bytes of memory an int value takes

	return 0;
}

// On most compilers, this will produce 4, but on others it may produce 2.




