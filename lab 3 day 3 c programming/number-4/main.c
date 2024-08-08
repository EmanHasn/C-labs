#include <stdio.h>

int main()
{
     //C program to store temperature of two cities of a week and display it using 2D Array
   int temperature[100][7];
   int i ,j;
   int r , c; // row col

	printf("Enter number of Cities :");
	scanf("%d",&r);
	printf("Enter number of days in week :");
	scanf("%d",&c);
    while(r<1 || r>100)
    {
        printf("Please enter valid number of cities: \n");
        scanf("%d" , &r);
    }
    while(c<1 || c>7)
    {
        printf("Please enter valid number of days in week: \n");
        scanf("%d" , &c);
    }

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("city[%d], day[%d]: ", i+1, j+1);
           scanf("%d", &temperature[i][j] );
       }
       printf("\n");
   }


   printf("the result is :\n\n");

   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("city[%d], day[%d]=%d\n", i+1, j+1, temperature[i][j]);
       }
       printf("\n");
   }

   return 0;
}
