#include <stdio.h>
#include <stdlib.h>
int main ()
{
    /// for ( init ; Condition ; Increment )
    for (int i=0 ; i < 10 ; i++ )
        {
            printf("The value of i = %d\n", i);
        }
}

/// In case of c99 error, Go to Settings > Compiler > Other Options > type ( -std=c99 ) without brackets.
