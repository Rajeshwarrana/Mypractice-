#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int add_age = *ptr;

    printf("%d",*(&age));
    printf("\n%u", &age);
    
}