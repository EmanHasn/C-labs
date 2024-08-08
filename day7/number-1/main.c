#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write Example on pointer to pointer
    int x = 10;
    int *pointer1 = &x;
    int **pointer2 = &pointer1;

    printf("address of x = %p\n",&x);
    printf("address of x = %p\n",pointer1);
    printf("address of x = %p\n",*pointer2);
    printf("\n\n");

    printf("Value of x = %d\n",x);
    printf("Value of x = %d\n",*pointer1);
    printf("Value of x = %d\n",**pointer2);

    return 0;
}
