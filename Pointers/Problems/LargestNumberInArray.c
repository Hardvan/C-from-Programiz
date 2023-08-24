//Finding largest element of an array

#include <stdio.h>

int main()
{
    int arr[] = {10,5,7,20,89,69,100,101,3,5,3,2};
    int large;
    for (int i = 1; i < 12; i++)
    {
        if (arr[i] > arr[0])
            large = arr[i];
    }
    printf("Largest = %d", large);

    return 0;
}