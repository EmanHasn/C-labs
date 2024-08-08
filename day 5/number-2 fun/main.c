#include <stdio.h>
#include <stdlib.h>

int main()
{
    //length without built-in function
    char a[20] ;
    int i;
    printf("Enter a string: ");
    fgets(a ,sizeof(a) , stdin);

    for (i = 0; a[i] != '\0'; ++i);
    printf("Length of the string: %d", i);

    return 0;
}
