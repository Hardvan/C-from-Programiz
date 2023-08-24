#include <stdio.h>

void example1()
{
    int city = 2, days = 7;
    int temperature[city][days];

    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < days; j++)
        {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying Values: \n\n");

    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < days; j++)
        {
            printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
        }
    }

}

void example2()
{
    int a[2][2], b[2][2], result[2][2]; //2x2 Matrices
    
    //Matrix a
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    //Matrix b
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    //Summation of Matrices
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nDisplaying Sum\n");
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
            if (j == 1)
                printf("\n");
        }
    }
}

void example3()
{
    int arr[2][3][2];

    printf("Enter 12 values:\n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("\nDisplaying Values:\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

}

int main()
{
    /*Different ways to initialize two-dimensional array

    int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
    int c[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
    int c[2][3] = {1, 3, 0, -1, 5, 9};*/
    
    //example1(); //C program to store temperature of two cities of a week and display it.
    //example2(); //C program to find the sum of two matrices of order 2*2
    example3(); //C Program to store and print 12 values entered by the user

    return 0;
}