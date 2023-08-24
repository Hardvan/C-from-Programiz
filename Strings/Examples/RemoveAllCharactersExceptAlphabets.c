#include <stdio.h>
#include <ctype.h>

int isalphabet(char ch)
{
    int alpha = 1;
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z')
        alpha = 1;
    else
        alpha = 0;
    
    return alpha;
}

int main()
{
    char str[100], new[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char ch;
    for (int i = 0; str[i]!='\0'; ++i)
    {
        ch = str[i];
        if (isalphabet(ch) == 1)
        {
            new[i] = ch;
        }
        else
        {
            new[i] = '';
        }
    }

    printf("New String = %s", new);

    return 0;
}