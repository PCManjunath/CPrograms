#include <stdio.h>
#include <stdlib.h>

int ArraySum (int MyArray [], int size)     /// MyArray size is defined as unsized
{
    int Sum = 0;
    for (int i=0; i<size; i++)  /// i value will be less then the size mentioned in line 4
    {
        /// Sum = Sum + MyArray [i];
        Sum += MyArray [i];
    }
        return Sum;
}
    int main ()
    {
        int MyNumberArray [6] = {20,30,60,50,55,30};
        int sum_of_array = ArraySum (MyNumberArray, 6);

        printf("Array Sum = %d", sum_of_array);
    }
