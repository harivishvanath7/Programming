# include <bits/stdc++.h>

int main()
{

    // DIFFERENT WAYS TO INITIALIZE A VARIABLE

    int a;         // no initializer (default initialization)
    int b = 5;     // initializer after equals sign (copy initialization)
    int c( 6 );    // initializer in parenthesis (direct initialization)
    // List initialization methods (C++11) (preferred)
    int d { 7 };   // initializer in braces (direct list initialization)
    int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
    int f {};      // initializer is empty braces (value initialization)



    // INITIALIZING MULTIPLE VARIABLES
    
    int a = 5, b = 6;          // copy initialization
    int c( 7 ), d( 8 );        // direct initialization
    int e { 9 }, f { 10 };     // direct brace initialization (preferred)
    int g = { 9 }, h = { 10 }; // copy brace initialization
    int i {}, j {};            // value initializationint a = 5, b = 6;          // copy initialization
    int c( 7 ), d( 8 );        // direct initialization
    int e { 9 }, f { 10 };     // direct brace initialization (preferred)
    int g = { 9 }, h = { 10 }; // copy brace initialization
    int i {}, j {};            // value initialization

    return 0;

}