#include <stdio.h>
#include <stdlib.h>

int main()
{
    // C program to create, initialize, assign and access a pointer variable.
    int number;
    int *pnumber;

    pnumber=&number;
    number=5;

    printf("value of number: %d\naddress of number: %d \n\n",number,&number);

    printf("\nvalue of number by Pointer: %d\naddress of number by Pointer: %d\n",*pnumber,pnumber);
    return 0;
}
