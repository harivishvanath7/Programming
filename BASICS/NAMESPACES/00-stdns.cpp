#include <iostream>

int main()
{
    std::cout << "Hello world!"; // when we say cout, we mean the cout defined in the std namespace
    return 0;
}




// std::cout, we’re saying “the cout that lives in namespace std“.

// :: symbol is an operator called the scope resolution operator. 


/* #include <iostream> // imports the declaration of std::cout

// using namespace std; // makes std::cout accessible as "cout"

 int cout() // defines our own "cout" function in the global namespace
 {
     return 5;
 }

 int main()
  {
     cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

     return 0;
 }

*/