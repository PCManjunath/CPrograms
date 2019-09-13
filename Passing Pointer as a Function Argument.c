#include <stdio.h>
#include <stdlib.h>

void getValue (int *my_pointer)
{
    *my_pointer = 1000;
    return ;
}

int main ()
{
    int get_the_value;
    getValue(&get_the_value);

    printf("The value of get_the_value = %d \n", get_the_value);
}
