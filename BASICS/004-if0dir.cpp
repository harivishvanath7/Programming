#include <stdio.h>

int main() 
{

    printf("This will be printed.\n");

/* The #if 0 preprocessor directive is not specifically used to 
comment out code blocks that contain multi-line comments. 
Instead, it's used to conditionally exclude code from compilation. */

    #if 0
    printf("This won't be printed.\n");
    printf("Neither will this.\n");
    #endif

    printf("This will be printed again.\n");

    return 0;
}
