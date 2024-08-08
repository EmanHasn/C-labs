#include <stdio.h>

int main()
{
    // C Program to Check Whether a Number is Even or Odd.
    int num;
    printf("please enter a number \n");
    scanf("%d" , &num);
    if(num%2==0)
    {
       printf("%d is Even Number" , num);
    }
    else
    {
        printf("%d is Odd Number" , num);
    }

    return 0;
}
