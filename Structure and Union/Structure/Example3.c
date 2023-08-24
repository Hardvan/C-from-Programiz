#include <stdio.h>

struct complex
{
    float imag;
    float real;
};

struct number
{
    struct complex comp;
    int integer;
}   num1;

int main()
{
    // Initialising complex variables
    num1.comp.imag = 11;
    num1.comp.real = 5.25;

    // Initiailising integer variable
    num1.integer = 69;

    //print structure variables
    printf("Imaginary Part: %.2f\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Integer: %d", num1.integer);

    return 0;
}