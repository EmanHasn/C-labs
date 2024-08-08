#include <stdio.h>
#include <stdlib.h>

void swap(int n1 , int n2);
int main()
{
    /* C Program that make function to swap two  integer numbers :
    (1)Swap by value*/
    int n1, n2;

  printf("enter number 1 and number 2: \n");
  scanf("%d%d", &n1, &n2);
  printf("\nbefore Swap\nnumber_1 = %d\nnumber_2 = %d\n", n1, n2);
  swap(n1 , n2);
  printf("\n\nafter Swap\nnumber_1 = %d\nnumber_2 = %d\n", n1, n2);


    return 0;
}
void swap(int n1 , int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
