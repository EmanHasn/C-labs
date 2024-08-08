#include<stdio.h>
#include<stdlib.h>

int main()
{
    //C Program that Store and print elements from array using pointer
    int arr[5];
    printf("enter array elements \n");
    for(int i = 0; i< 5; i++)
    {
        scanf("%d" , arr+i);
    }
    printf("the elements are: \n");
    for(int i = 0; i<5;i++)
    {
        printf("%d\n" , *(arr+i));
    }
    return 0;
}
