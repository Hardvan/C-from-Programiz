#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

void display(struct student s);

int main()
{
    struct student s1;

    printf("Enter name: ");

    fgets(s1.name, sizeof(s1.name), stdin);
    // OR
    // read string input from the user until \n is entered
    // \n is discarded
    // scanf("%[^\n]%*c", s1.name); */

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1);

    return 0;
}

void display(struct student s)
{
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("Age: %d", s.age);
}