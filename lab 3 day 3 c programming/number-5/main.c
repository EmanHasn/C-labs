#include <stdio.h>

int main()
{
        //C Program to read a matrix and find sum using 2D array(one 2 D array and find sum for all elements)

	int arr[100][100];
	int i,j,r,c;
	int sum = 0;

	printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);
    while(r<1 || r>100)
    {
        printf("Please enter valid number of rows: \n");
        scanf("%d" , &r);
    }
    while(c<1 || c>100)
    {
        printf("Please enter valid number of col: \n");
        scanf("%d" , &c);
    }
	printf("\nEnter arr elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			sum+=arr[i][j];
		}

	}

	printf("\n sum of all elements :%d",sum);
	return 0;
}
