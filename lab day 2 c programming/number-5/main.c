#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C Program to Find the Largest Number Among Three Numbers.
    int num1 , num2, num3;
    printf("Enter 3 numbers \n");
    scanf("%d \n %d \n %d" , &num1 , &num2 , &num3);
    if(num1>num2){
        printf("the larger numbers = %d" , num1);
    }
    else if(num3>num2){
        printf("the larger numbers = %d" , num3);
    }
    else{
        printf("the larger numbers = %d" , num2);
    }

    return 0;
}
