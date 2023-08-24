#include <stdio.h>

// One way of creating structure variables

struct Person
{
    // code
};

int main
{
    struct Person person1, person2, p[20];
    return 0;
}


// Another way of creating structure variables

struct Person
{
    // code
} person1, person2, p[20];

// In both cases,
// person1 and person2 are struct Person variables
// p[] is a struct Person array of size 20.