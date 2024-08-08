#include <stdio.h>
#include <string.h>

int main()
{
    //Write a program in C to copy one string to another string.
    char a[20];
    printf("Enter a string 1: ");
    fgets(a ,sizeof(a) , stdin);

    char b[20];
    printf("Enter b string 2: ");
    fgets(b ,sizeof(b) , stdin);

    strcpy(b,a);
    printf("\n updating b string 2 is %s", b);

    //without function
    b[20]= a[20];
    printf("\n 22 updating b string 2 is %s", b);
    return 0;
}
