#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   printf("Enter the here=");
   scanf("%d,&age");

   if(age>18) /// Condition here
   {
       printf("The given age is greater then 18");
   } else if (age == 18)
   {
       printf("The given age is equal to 18");
   } else
   {
    printf("The given age is not greater then 18");
   }

}
