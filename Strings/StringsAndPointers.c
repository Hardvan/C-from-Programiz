#include <stdio.h>

int main()
{
    char name[] = "Harry Potter";

    printf("%c\n", *name);
    printf("%c\n", *(name+1));
    printf("%c\n", *(name+7));

    char *nameptr;

    nameptr = name;

    printf("%c\n", *nameptr);
    printf("%c\n", *(nameptr+1));
    printf("%c\n", *(nameptr+7));

    return 0;
}