#include <stdio.h>

int main()
{
    char str[] = "HI";

    int i;
    for (i = 0; str[i]!='\0'; ++i);

    printf("Length = %d", i);

    return 0;
}