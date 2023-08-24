#include <stdio.h>

typedef struct complex
{
    float real;
    float imag;
} comp;

comp add(comp n1, comp n2)
{
    comp temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;

    return temp;
}

int main()
{
    comp n1, n2, result;

    printf("For 1st number:\n");
    printf("Enter real part: ");
    scanf("%f", &n1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n1.imag);

    printf("\nFor 2nd number:\n");
    printf("Enter real part: ");
    scanf("%f", &n2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &n2.imag);

    result = add(n1, n2);

    printf("\nSum:\n");
    printf("Real: %.2f\n", result.real);
    printf("Imaginary: %.2f", result.imag);

    return 0;
}