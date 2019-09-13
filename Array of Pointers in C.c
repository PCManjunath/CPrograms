#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int val_array [3] = {30, 40, 50};
    int *pointer_array [3];

    for (int i=0; i<3; i++)
    {
        pointer_array[i] = & val_array[i]; ///Assign the address of array element
    }

    for (int i=0; i<3; i++)
    {
        printf("value of val_array [%d] = %d \n", i, pointer_array[i]);     /// Accessing the array of pointer
    }
}
