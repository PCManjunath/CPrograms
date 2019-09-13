#include <stdio.h>
#include <stdlib.h>
int main()
{
    ///The ternary (Conditional) operator in C
    int a=19,b=20;
    int c ;
    /// (/* logical expression */) ? (/*If non-zero (true) */) : (/* If 0 (false)*/)
    c = (a > b) ? b : a;
    printf("The answer is = %d", c);
}
