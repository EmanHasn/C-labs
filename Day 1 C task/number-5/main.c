#include <stdio.h>

int main()
{
    //6  C Program to Compute Quotient and Remainder
   int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("quotient = %d \n", quotient);
    printf("remainder = %d", remainder);
    return 0;
}
