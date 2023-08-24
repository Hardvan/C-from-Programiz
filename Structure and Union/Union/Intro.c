#include <stdio.h>

// A union is a user-defined type similar to structs in C except for one key difference.
// Structures allocate enough space to store all their members,
// whereas unions can only hold one member value at a time.

union Car
{
    char name[50];
    int price;
};

int main()
{
    union Car car1, car2, *car3;

    return 0;
}

// OR

union Car
{
    char name[50];
    int price;
}   car1, car2, *car3;

// In both cases, union variables car1, car2, and a union pointer car3 of union car type are created.

//To access price for car1, car1.price is used.
//To access price using car3, either (*car3).price or car3->price can be used.