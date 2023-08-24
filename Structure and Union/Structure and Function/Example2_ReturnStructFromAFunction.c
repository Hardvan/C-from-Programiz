#include <stdio.h>

struct Student
{
    char name[50];
    int age;
};

struct Student getInfo();

int main()
{
    struct Student s;

    s = getInfo();

    printf("\nDisplaying Info:\n");
    printf("Name: %s", s.name);
    printf("Age: %d", s.age);

    return 0;
}

struct Student getInfo() //returns a struct
{
    struct Student s1;

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter Age: ");
    scanf("%d", &s1.age);

    return s1;
}