#include <stdio.h>

int main()
{
    //C Program to Calculate Average Using Arrays

    int arr[100], elementCount;
    float average , sum=0;

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
        sum+=arr[i];
    }
    average = sum / elementCount;
    printf("average of arr elements = %.1f " , average);
    return 0;
}
