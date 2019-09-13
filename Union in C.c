#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union myUnion {
    int myInt; /// memory size 4
    int myChar; /// memory size 1
};

int main ()
{
    union   myUnion uni;
    uni.myInt = 4;
    uni.myChar = 9;

    printf("%d \n", uni.myInt);
    printf("%d \n", uni.myChar);
    return 0;
}
