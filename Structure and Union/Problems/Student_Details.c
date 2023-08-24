#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
} s;

int main()
{
    printf("Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter your Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter your marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}