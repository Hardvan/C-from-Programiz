#include <stdio.h>

// We use the typedef keyword to create an alias name for data types.
// It is commonly used with structures to simplify the syntax of declaring variables.

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    struct Distance d1, d2;
}

// We can use typedef to write an equivalent code with a simplified syntax:

typedef struct Distance
{
    int feet;
    float inch;
}   distances;

int main()
{
    distances d1, d2;
}