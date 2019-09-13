#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int MyNumberArray [ 6 ] = { 20, 30, 50, 60, 55, 80}; /// Array value is 6 so the 6 integer values can be stored in function MyNumberArray
    int accessArray = MyNumberArray [ 1 ]; /// accessing the index number values in this case value 20 index value is 0, index 2 is 30 and so on.
    printf(" value = %d \n", accessArray);

    char charArray [ 4 ] = {'a','b','c','d'}; ///Similarly char array contains characters in the carrier

    for (int i=1; i<6; i++)
    {
        printf("Element [%d] = %d \n", i, MyNumberArray [i] );
    }

}
