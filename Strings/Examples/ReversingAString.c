#include <stdio.h>
#include <string.h>

void method1();
void method2();
void reverseSentence();

int main()
{
    //method1();
    method2();

    return 0;
}

void method1()
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = strlen(str) - 2; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

void method2()
{
    printf("Enter a sentence: ");
    reverseSentence();
}

void reverseSentence()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        reverseSentence();
        printf("%c", ch);
    }
}