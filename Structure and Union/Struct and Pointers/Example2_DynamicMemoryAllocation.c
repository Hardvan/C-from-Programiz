#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char name[30];
    int age;
};

int main()
{
    struct Person *ptr;
    int i, n;

    printf("Enter number of people: ");
    scanf("%d", &n);

    // allocating memory for n numbers of struct person
    ptr = (struct Person*) malloc(n * sizeof(struct Person));

    for(i = 0; i < n; ++i)
    {
        printf("Enter Name & Age respectively: ");
        scanf("%s%d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("\nDisplaying Information:\n");
    for(i = 0; i < n; ++i)
    {
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
    }

    return 0;
}