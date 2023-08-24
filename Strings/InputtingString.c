#include <stdio.h>

void method1()
{
    //You can use the scanf() function to read a string.
    //The scanf() function reads the sequence of characters
    //until it encounters whitespace (space, newline, tab, etc.)

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);  //Notice that we have used the code name instead of &name with scanf()
                        //This is because name is a char array, and we know that
                        //array names decay to pointers in C.
    printf("Your name is %s", name);

}

void method2()
{
    //fgets() - to read a line of string.
    //puts() - display the string.

    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); //read String
    printf("Name: ");
    puts(name); //display String
    
    /*Or
    printf("Name: %s", name);
    */

}

int main()
{
    //method1();
    method2();

    return 0;
}