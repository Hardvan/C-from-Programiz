//Program to Pass Individual Array Elements

#include <stdio.h>

void display(int age1, int age2)
{
    printf("Age 1: %d\n", age1);
    printf("Age 2: %d", age2);
}

int main()
{
    int ageArray[] = {2,8,4,12,15};
    display(ageArray[1], ageArray[4]);

    return 0;
}

//Note: In C programming, you can pass arrays to functions
//however, you cannot return arrays from functions.