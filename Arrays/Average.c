// Program to find the average of n numbers using arrays

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter: %d) ", i+1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    int average = sum / n;
    printf("Average = %d", average);

    return 0;
}