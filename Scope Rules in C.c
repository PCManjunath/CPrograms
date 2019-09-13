#include <stdio.h>
#include <stdlib.h>

int G; /// Global variable which is not declared in any of the function and the default value will be Zero.

void NumberPrint()
{

}

int main ()
{
    int L; /// Local variable which is declared under the function, in this case Main is a function and value can be anything
    printf("Local variable value = %d \n", &L);
    printf("Global variable value = %d \n", &G);
}

/// Local variables can not be called in other functions
