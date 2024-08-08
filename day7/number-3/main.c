#include <stdio.h>
#include <stdlib.h>
int main()
{
    //details using structure and Dynamic Memory Allocation, Describe [malloc, realloc, calloc, free]

	int *ptr, *ptr1;
    int n = 3;
    ptr = (int*)malloc( n * sizeof(int));
    ptr1 = (int*)calloc(n, sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("memory allocated malloc\n");
        for(int i=0; i<n; i++)
        {
            ptr[i] = i+1;
            printf("%d\n",ptr[i]);
        }
        printf("\n");
        printf("malloc memory done\n");
    }

    printf("\n\nre-allocated");
    n = 5;
    ptr = (int*) realloc(ptr, n * sizeof(int));
       if(ptr == NULL || ptr1 == NULL)
    {
        printf("\n Memory not allocated");
        exit(0);
    }
    else
    {
        printf("\n Memory re-allocated done\n");
        for(int i=0; i<n; i++)
        {
            ptr[i] = i+1;
            printf("%d\n",ptr[i]);
        }
        printf("\n");

        free(ptr);

        printf("\nMemory free done\n\n\n");

    }
	return 0;
}
