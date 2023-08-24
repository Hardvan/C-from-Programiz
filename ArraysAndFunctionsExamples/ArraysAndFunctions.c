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