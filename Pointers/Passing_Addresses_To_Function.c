#include <stdio.h>

void swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 5, b = 10;

    printf("Before:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    swap(&a, &b);

    printf("After:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}