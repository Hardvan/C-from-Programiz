#include <stdio.h>

struct Distance
{
    float inch;
    float feet;
} d1, d2, result;


int main()
{
    printf("For 1st Distance:\n");
    printf("Enter feet: ");
    scanf("%f", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("For 2nd Distance:\n");
    printf("Enter feet: ");
    scanf("%f", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    //convert inches to feet if >= 12
    while(result.inch >= 12)
    {
        result.inch -= 12;
        ++result.feet;
    }

    printf("Sum = %.2f Feet and %.2f Inches", result.feet, result.inch);

    return 0;
}