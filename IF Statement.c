#include <stdio.h>
#include <stdlib.h>

int main()
{
 int age;
    printf("Please enter the age");
    scanf("%d",&age);
if(age>18) /// Given Condition in IF statements
{
    printf("The given age is greater then 18");
}
if (age==18)
{
    printf("The given age is equal to 18");
}
if (age<18)
{
    printf("The given age is less then 18");
}
    return 0;
}
