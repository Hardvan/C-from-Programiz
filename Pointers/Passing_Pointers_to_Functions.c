#include <stdio.h>

void addOne(int* ptr)
{
    (*ptr)++;
}

int main()
{
    int* p, i = 10;
    p = &i;

    addOne(p); //Same as addOne(&i);

    printf("%d", *p);

    return 0;
}