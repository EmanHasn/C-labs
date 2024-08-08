#include <stdio.h>

int main()
{
    // Input and output an array using 2 for loops.
    int arr[100], elementCount;

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

    printf("\n \n arr:");
    for(int i = 0; i<elementCount ; i++)
    {
        printf(" %d " , arr[i]);
    }


    return 0;
}
