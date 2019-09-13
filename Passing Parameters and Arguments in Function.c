# include <stdio.h>
# include <stdlib.h>

void Sum(int a, int b) /* (type1 argument1, type2 argument2, .......n); */
{
    int Sum = a + b;
    printf("Sum = %d\n", Sum);
}

int main ()
{
    Sum (50, 60); /// Multiple arguments passing to the Function
    Sum (1000, 500); /// n Number of times can be copy paste for more calculations
    Sum (1000, 1800);
}
