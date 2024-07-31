# include <iostream>

int main()
{
    std::cout << "Enter an Integer : " << '\n';

    int n{};
    std::cin >> n;
    
    // Printing the outputs
    
    std::cout << "The Integer is : " << n << "\n";
    std::cout << "Double of "<< n << " is : " << (n*2) << "\n";   
    std::cout << "Triple of "<< n << " is : " << (n*3) << "\n";
    
    return 0;
}
