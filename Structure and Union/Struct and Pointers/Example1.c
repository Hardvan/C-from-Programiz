#include <stdio.h>

//To access members of a structure using pointers, we use the -> operator.

struct Person
{
    int age;
    float weight;
};

int main()
{
    struct Person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);// personPtr->age is equivalent to (*personPtr).age

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);// personPtr->weight is equivalent to (*personPtr).weight

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("Weight = %.2f", personPtr->weight);

    return 0;
}