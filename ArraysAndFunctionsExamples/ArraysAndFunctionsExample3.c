//Pass Multidimensional Arrays to a Function

#include <stdio.h>

//When passing two-dimensional arrays
//it is not mandatory to specify the number of rows in the array.
//However, the number of columns should always be specified.
void displayNumbers(int n[][2]);

int main()
{
    int num[2][2];

    printf("Enter 4 numbers: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    displayNumbers(num);

    return 0;
}

void displayNumbers(int n[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", n[i][j]);
        }
    }
}