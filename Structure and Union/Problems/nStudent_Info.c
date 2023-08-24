#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    char name[50];
    int roll;
    float marks;
} student;

int main()
{
    student *ptr;

    int n;
    printf("Enter no of students: ");
    scanf("%d", &n);

    ptr = (student*) malloc(n * sizeof(student));

    int i;
    for(i = 0; i < n; ++i)
    {
        printf("Enter Name of Student %d: ", (i+1));
        scanf("%s", (ptr+i)->name);

        printf("Enter Roll No, Marks: ");
        scanf("%d%f", &(ptr+i)->roll, &(ptr+i)->marks);
    }

    for(i = 0; i < n; ++i)
    {
        printf("Student %d:\n", (i+1));
        printf("Name: %s\n", (ptr+i)->name);
        printf("Roll No: %d\n", (ptr+i)->roll);
        printf("Marks: %.2f\n\n", (ptr+i)->marks);
    }

    return 0;
}