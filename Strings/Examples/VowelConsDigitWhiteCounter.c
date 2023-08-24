#include <stdio.h>
#include <ctype.h> //for tolower() function

int main()
{
    char str[1000], ch;
    int vowel = 0, cons = 0, digit = 0, white = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]!=0; i++)
    {
        ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel++;
        
        else if (ch >= 'a' && ch <= 'z')
            cons++;
        
        else if (ch >= '0' && ch <= '9')
            digit++;
        
        else if (ch == ' ')
            white++;
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", cons);
    printf("Digits = %d\n", digit);
    printf("Whitespaces = %d\n", white);

    return 0;
}