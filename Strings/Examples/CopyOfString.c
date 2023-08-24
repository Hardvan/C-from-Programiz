#include <stdio.h>

int main()
{
    char str[] = "Hello";
    char copy[100];

    for (int i = 0; str[i]!=0; ++i)
    {
        copy[i] = str[i];
    }

    printf("Copy = %s", copy);

    return 0;
}