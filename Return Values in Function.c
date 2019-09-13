#include <stdio.h>
#include <stdlib.h>

int Product (int a, int b)
{
    return (a * b); /// Multiplying any two numbers in function
}

int main()
{
    int x,y;
    printf("Enter Two Numbers \n");

    printf("Enter first number \n", x);
    scanf("%d", & x);

    printf("Enter second number \n", y);
    scanf("%d", & y);

    int Prod;
    Prod = Product(x,y);

    printf("Products = %d", Prod);
}
