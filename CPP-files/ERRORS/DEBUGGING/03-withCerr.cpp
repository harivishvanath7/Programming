#include <iostream>

int getUserInput()
{
std::cerr << "getUserInput() called\n";
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
std::cerr << "main() called\n";
    short x{ 240 };
    std::cout << "You entered: " << x << '\n';

    return 0;
}