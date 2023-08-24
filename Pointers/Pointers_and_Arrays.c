#include <stdio.h>

void example1()
{
    int i, x[6], sum = 0;

    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", x+i); //Same as scanf("%d", &x[i]);

        sum += *(x+i); //Same as sum += x[i];
    }
    printf("Sum = %d", sum);
}

void example2()
{
    int x[5] = {1, 2, 3, 4, 5};
    int* ptr;

    // ptr is assigned the address of the third element
    ptr = &x[2]; 

    printf("*ptr = %d \n", *ptr);   // 3
    printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
    printf("*(ptr-1) = %d", *(ptr-1));  // 2
}

int main()
{
    example1();
    example2();

    return 0;
}

//In most contexts, array names decay to pointers.