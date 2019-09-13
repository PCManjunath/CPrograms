#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int marks=90; /*Marks is the Expression*/

        switch (marks)
        {
        case 90:
            printf("Excellent");
            break;
        case 75:
            printf("Very Good");
            break;
        case 60:
            printf("Good");
            break;
        case 40:
            printf("Poor");
            break;
        default:
            printf("Failed");
        }
}
