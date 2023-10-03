#include <bits/stdc++.h>

int getNo(){

    int n {};
    
    std::cout << "Enter an Integer : ";
    std::cin >> n;

    return n;
}

int main()
{
    int num {getNo()};

    std::cout << "The Entered Number is : " << num << std::endl;

    return 0;
}