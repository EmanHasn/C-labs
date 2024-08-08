#include <stdio.h>
#include <string.h>

void isMatchingArr(char a[], char b[]);

int main()
{
    //Write a program in C to compare the length of two strings.
    char a[20];
    printf("Enter a string 1: ");
    fgets(a ,sizeof(a) , stdin);

    char b[20];
    printf("Enter b string 2: ");
    fgets(b ,sizeof(b) , stdin);
    isMatchingArr(a,b);

    printf("\n \n without built-in function \n \n");

    return 0;
}
void isMatchingArr(char a[], char b[])
{
    if(strcmp(a,b)==0)
    {
        printf("\n 2 string are matching");
    }
    else
    {
        printf("\n 2 string are not matching");
    }
}

