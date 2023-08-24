// Program to calculate the sum of array elements by passing to a function 


#include <stdio.h>

float calcSum(float n[]);

int main()
{
    float result;
    float num[] = {1.1, 22, 33, 69, 42.01};

    result = calcSum(num); //Array is passed
    printf("Result = %.2f", result);

    return 0;
}

float calcSum(float n[])
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += n[i];
    }
    
    return sum;
}