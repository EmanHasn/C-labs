#include <stdio.h>

int main()
{
    //C Program to Find Largest Element in an Array
    int arr[100], elementCount , max;

    printf("Enter number of elements: \n");
    scanf("%d" , &elementCount);

    while(elementCount<1 || elementCount>100)
    {
        printf("Please enter valid number of elements: \n");
        scanf("%d" , &elementCount);
    }
     for(int i = 0; i<elementCount ; i++)
    {
        printf("enter elements of array \n");
        scanf("%d" , &arr[i]);
    }
        max = arr[0];
    for(int i = 1 ; i<elementCount ; i++)
    {
        if(max<arr[i])
            {
                max=arr[i];
            }
    }
    printf("max %d" , max);
    return 0;
}
