#include <stdio.h>


int main()
{
    //C Program to Display Fibonacci Sequence
    int counter, number,
    first=0 , second=1 ,
    nextterm = first+second;

    printf("enter number \n");
    scanf("%d" , &number);

    printf("%d %d ",first,second);

    for(counter = 3; counter<=number ; counter++)
    {
        printf("%d " , nextterm);
        first=second;
        second=nextterm;
        nextterm=first+second;
    }

    return 0;
}
