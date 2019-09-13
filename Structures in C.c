#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {

    int id;
    char Name[20];
    float Percentage;
};

int main ()
{
    struct Student Record1;
    Record1.id = 123;
    strcpy(Record1.Name, "John");
    Record1.Percentage = 70.20;

    printf("ID= %d, Name= %s, Percentage= %f \n", Record1.id, Record1.Name, Record1.Percentage);

    struct Student Record2;
    Record2.id = 456;
    strcpy(Record2.Name, "Munch");
    Record2.Percentage = 90.2;

    printf("ID= %d, Name= %s, Percentage= %f \n", Record2.id, Record2.Name, Record2.Percentage);
    return 0;
}
