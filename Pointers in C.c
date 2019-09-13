#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int val = 30;               /// val is a variable containing value 30
    int *pointer_P;             /// Pointer defined in C
    pointer_P = &val;           /// Pointer addressed to val variable

    printf("address of val = %x \n", &val);     /// accessing the val value in Hexadecimal value

    printf("value of pointer = %x \n", pointer_P);

    printf("value of pointer variable = %d \n", *pointer_P);
}
