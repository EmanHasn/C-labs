#include <stdio.h>

int main()
{
    //C Program to Make a Simple Calculator Using switch...case
    char sign;
    printf("Enter the Operation sign \n");
    scanf("%c", &sign);

    int num1, num2;
    printf("Enter Numbers : ");
    scanf("%d %d",&num1,&num2);

    switch (sign)
    {
        case '+':
            {
                printf("sum of %d + %d = %d", num1 , num2 , num1+num2);
                break;
            }
            case '-':
            {
                printf("sub of %d - %d = %d", num1 , num2 , num1-num2);
                break;
            }
            case '*':
            {
                printf("multiply of %d * %d = %d", num1 , num2 , num1*num2);
                break;
            }
            case '/':
            {
                printf("divide of %d / %d = %d", num1 , num2 , num1/num2);
                break;
            }
            case '%':
            {
                printf("modulus of %d mod %d = %d", num1 , num2 , num1%num2);
                break;
            }
            default:
                {

                    printf("invalid operation or numbers");
                }
    }


    return 0;
}
