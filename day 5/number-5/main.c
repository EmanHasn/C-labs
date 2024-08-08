#include <stdio.h>
#include <string.h>

int main()
{
    //Write a program in C to concat string to another string.
    char a[20];
    printf("Enter a string 1: ");
    fgets(a ,sizeof(a) , stdin);

    char b[20];
    printf("Enter b string 2: ");
    fgets(b ,sizeof(b) , stdin);

    strcat(a,b);

    puts("\n concat of a, b string is %s", a);

    return 0;
}
