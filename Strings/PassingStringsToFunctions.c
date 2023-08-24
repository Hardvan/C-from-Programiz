#include <stdio.h>

void displayString(char str[])
{
    printf("String output: ");
    puts(str);
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str); //Passing string to function

    return 0;
}