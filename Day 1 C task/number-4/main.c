#include <stdio.h>


int main()
{
    //Program to Swap Two Numbers
    int num1, num2, swap;
    printf("enter number1 \n");
    scanf("%d" , &num1);
    printf("enter number2 \n");
    scanf("%d" , &num2);
    swap=num2;
    num2=num1;
    printf("new number 1 %d \n" , swap);
    printf("new number 2 %d \n" , num2);

    return 0;
}
