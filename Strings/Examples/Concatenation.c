#include <stdio.h>

int main()
{
    char s1[100] = "Hello", s2[] = "and Good Morning!";

    int length = 0;
    while (s1[length] != '\0')
    {
        ++length;
    }

    for (int j = 0; s2[j] != '\0'; ++j, ++length)
    {
        s1[length] = s2[j];
    }
    s1[length] = '\0';

    printf("After concatenation: %s", s1);

    return 0;
}